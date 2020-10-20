## 3. Virtual inheritant
"Avoid virtual base classes unless your design really insists on them" - [Stephen Dewhurst](https://youtu.be/SShSV_iV1Ko?t=3294)
## 2. Problem with inheritance
### a - Sy Brand talk  
[Dynamic Polymorphism with Metaclasses and Code Injection](https://www.youtube.com/watch?v=8c6BAQcYF_E)
* Often require dynamic allocation
* Ownership and nullability considerations
* Intrusive: require modifying child classes
* No more value semantics
* Changes semantics for algorthims and containers  
#### Link for this talk:
* code: [https://godbolt.org/z/bUDyhG](https://godbolt.org/z/bUDyhG)
* prototype: [https://github.com/tartanllama/typeclasses](https://github.com/tartanllama/typeclasses)
### b - Louis Dionne talk
[Runtime Polymorphism: Back to the Basics](https://www.youtube.com/watch?v=OtU51Ytfe04&t=4153s)
* code: [dyno](https://github.com/ldionne/dyno)
### c - Sean Parent talk
* [Inheritance Is The Base Class of Evil](https://www.youtube.com/watch?v=bIhUE5uUFOA)
* [Runtime Polymorphism](https://www.youtube.com/watch?v=QGcVXgEVMJg&list=PLKtBMOPB5ra9DeN_N6jEDg0eY07_sgTtk&index=10&t=363s)
* [code](https://github.com/pvthuyet/think-about-cpp/blob/main/ThinkAboutCpp/inheritant_is_the_base_class_of_evil.h)
### d - Boost
* [Boost.TypeErasure](https://www.boost.org/doc/libs/1_55_0/doc/html/boost_typeerasure.html#boost_typeerasure.introduction)
  
## 1. Retiring the Singleton Pattern
[Peter Muldoon talk](https://www.youtube.com/watch?v=K5c7uvWe_hw&t=2487s), [slide](https://github.com/CppCon/CppCon2020/tree/main/Presentations/retiring_the_singleton_pattern)
