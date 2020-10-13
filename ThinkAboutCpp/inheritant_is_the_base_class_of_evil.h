#pragma once
#include<vector>
#include<memory>

class my_class_t
{};

void draw(const int& x, std::ostream& out, size_t position)
{
	out << std::string(position, ' ') << x << std::endl;
}

void draw(const std::string& x, std::ostream& out, size_t position)
{
	out << std::string(position, ' ') << x << std::endl;
}

void draw(const my_class_t& x, std::ostream& out, size_t position)
{
	out << std::string(position, ' ') << "my_class_t" << std::endl;
}

class object_t
{
public:
	template<typename T>
	object_t(T x) : self_(new model<T>(std::move(x)))
	{
		std::cout << "ctor\n";
	}
	
	object_t(const object_t& x) : self_(x.self_->copy_())
	{
		std::cout << "copy\n";
	}
	
	object_t(object_t&&) noexcept = default;

	object_t& operator=(const object_t& x)
	{
		object_t tmp(x);
		self_ = std::move(tmp.self_);
		return *this;
	}

	object_t& operator=(object_t&&) noexcept = default;

	friend void draw(const object_t& x, std::ostream& out, size_t position)
	{
		x.self_->draw_(out, position);
	}

private:
	struct concept_t
	{
		virtual ~concept_t() = default;
		virtual void draw_(std::ostream&, size_t) const = 0;
		virtual concept_t* copy_() const = 0;
	};

	template<typename T>
	struct model : concept_t
	{
		model(T x) : data_(std::move(x))
		{}
		virtual concept_t* copy_() const override
		{
			return new model(*this);
		}

		virtual void draw_(std::ostream& out, size_t position) const override
		{
			draw(data_, out, position);
		}

		T data_;
	};

	std::unique_ptr<concept_t> self_;
};

using document_t = std::vector<object_t>;
void draw(const document_t& x, std::ostream& out, size_t position)
{
	out << std::string(position, ' ') << "<document>" << std::endl;
	for (const auto& e : x)
	{
		draw(e, out, position + 2);
	}
	out << std::string(position, ' ') << "</document>" << std::endl;
}