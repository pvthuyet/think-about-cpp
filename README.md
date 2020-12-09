# [How to Choose the Right Standard Library Container, and Why You Should Want Some More - Alan Talbot](https://www.youtube.com/watch?v=yjPKVOYcw28&t=2183s)
![](doc/41-container.png) 
![](doc/42-container.png) 
[Vector recycling](https://youtu.be/yjPKVOYcw28?t=2228)  
![](doc/43-container.png) 
![](doc/44-container.png) 
# [9. Object-Oriented Programming - Jon Kalb - CppCon 2019](https://www.youtube.com/watch?v=32tDTD9UJCE&t=1221s)
Summary  
![](doc/40-oop.png) 
detail  
![](doc/38-oop.png) 
![](doc/39-oop.png) 
# [8. Sean Parent talk coding cpp](https://www.youtube.com/watch?v=W2tWOdzgXHA&list=WL&index=3&t=2075s)
![](doc/37-tip-cpp.png) 
# [7. Short life span](https://www.youtube.com/watch?v=J02S50z5zEo&t=769s)
![](doc/31-weak-ordering.png)  
![](doc/32-less-ordering.png)  
![](doc/33-equal.png)  
![](doc/34-equivalence.png)  
![](doc/35-3way.png)  
![](doc/36-auto-check.png)  
# 6. SOLID
### [a - Klaus Iglberger](https://youtu.be/Ntraj80qN2k)  
![](doc/25-srp.png)  
![](doc/26-ocp.png)  
![](doc/27-lsp.png)  
![](doc/28-isp.png)  
![](doc/29-dip.png)  
![](doc/30-solid_summary.png)  
# 5. Move
### [a - David Olsen](https://youtu.be/ZG59Bqo7qX4)  
![](doc/24-move.png)  
# 4. Exception safe
### a - Jon Kalb
[Part I](https://youtu.be/W7fIy_54y-w)  
[Part II](https://youtu.be/b9xMIKb1jMk)  
[Part III](https://youtu.be/MiKxfdkMJW8)  
![](doc/12-joel.png)  
![](doc/12-jon.png)  
![](doc/23-promise.png)  
* Example implement for vector: what the problem??    
![](doc/1-vector_impl_alex.png)  
* Example implement for stack: what the problem??    
![](doc/2-stack_pop.png)
* The right way of thinking  
![](doc/3-right_way.png)
* Exception-Safety Guarantees (Abrahams)  
![](doc/4-guarantees_abrahams.png)
![](doc/5-base_guarantee.png)
![](doc/6-safety_guarantees_abrahams.png)
![](doc/6-safety_guarantees_abrahams_2.png)
* Error dectection  
![](doc/8-error_detection.png)
* noexcept  
![](doc/9-noexcept.png)  
* Ho to not `terminate`  
![](doc/10-not_terminate.png)  
* Destructor  
![](doc/11-destructor.png)  
* Aborted Construction  
![](doc/11-aborted_construction.png)  
* Fundamental object functions  
![](doc/13-fundamental_object_functions.png)  
* Guidline to use noexcept  
![](doc/15-guideline_noexcept.png)  
* Use critical line  
![](doc/16-critical_line.png)  
![](doc/17-critical_line_2.png)  
* Most important design guidline  
![](doc/18-design_guideline.png)  
* Exeption safety guidline  
![](doc/19-exception_safety_guideline.png)  
* Sean Parent's Rules  
![](doc/20-sean_rule.png)  
* Refactoring steps  
![](doc/21-refactoring_step.png)  
* Success path  
![](doc/22-success_path.png)  

### b - [Klaus Iglberger](https://youtu.be/0ojB8c0xUd8)
Function that should never fail
* Destructors (implicitly marked as  `noexcept` since C++11)
* Move Operator (should marked as  `noexcept`)
* `swap` operations

# 3. Avoid virtual inheritance
"Avoid virtual base classes unless your design really insists on them" - [Stephen Dewhurst](https://youtu.be/SShSV_iV1Ko?t=3294)
# 2. Problem with inheritance
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
  
# 1. Retiring the Singleton Pattern
[Peter Muldoon talk](https://www.youtube.com/watch?v=K5c7uvWe_hw&t=2487s), [slide](https://github.com/CppCon/CppCon2020/tree/main/Presentations/retiring_the_singleton_pattern)
