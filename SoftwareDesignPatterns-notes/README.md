# SoftwareDesignPatterns-notes





## Object Oriented desing  

solving a particular software problem by basic object oriented principles,  
deciding what objects to use, how these objects should relate to each other, etc   




## Whats Design Pattern  

Object Oriented analysis and Design  

Design priciples that makes  

reusable  
flexible  
maintainable  


same design proble many times  
this becomes recurring problems  
and some solutions are preferrred over others  
due to factors like flexiblity and reusability  


Design Pattern: practical proven solution to a recurring design problem  

In the book Design Patterns: Elements of Reusable Object-Oriented Software,  
there are 23 desgin patterns 
Selection of which these design patterns to use is what matters 


Design Patterns are conceptual  
can be applied in software design to improve flexiblity and reusability  




Adapter pattern  
Anti-Pattern  
Behavioural patterns  
Chain of Responsibility pattern  
Command pattern  
Composite pattern  
Creational pattern  
Decorator pattern  
Design pattern  
Facade pattern  
Factory Method pattern  
Mediator pattern  
MVC pattern  
Singleton pattern  
State pattern  
structural patterns  


Major Design Principles  
- Decomposition  
- Generalization  
UML class diagrams  
Relationships  
- Association  
- Aggregation  
- Composition  
- Inheritance  
- Interface  

Pattern language: a collection of patterns that are related to a certain problem space  
ex- gaming software and accounting software can have very different pattern languages  


>> Creational patterns: deals with how creating new objects is handled  

languages without the concept of classes encorages to clone and add to existing objects, for ex javascript not contain classes to be instantiated, objects are instead cloned and expanded to meet the pupose of those particular instances called prototypes  


>> Structural patterns: deals with how objects are connected to each other(relationships), how subclasses and classes interact through inheritance  


>> Behavioural pattern: deals with overall goal and purpose of each objects  


When designing systems some patterns can be more resource intensive with more memory or processing  




>> Singleton pattern: its a creational pattern that describes a way to create an object  
- refers to having only one object of a class  
- we need not have multiple preferences object for an app, since that would lead to conflicts or inconsistencies, similar is the case with print queue of a printer    
- enforces one and only one object of a Singleton class  
- the singleton object is globally accessible  
- there is a need to prevent errors arising from multiple objects of a Singleton class being instantiated in larger projects with multiple developers  
- So to solve this, we write this rule down into the class itself, so that its only possible to create one and only one singleton class  
- lazy creation: the object is not created until its truly needed  
- tradeoff: if multiple computing threads are running, it can cause issues by the threads trying to access the shared single object  
- goal: provide global access to a class thats restricted to one instance  
- implementation: a private constructor with a public method that instantiates the class if its not already instantiated  



>> Factory method pattern: its also a type of creational pattern  
- factory object  
- in oops factories are used for creating objects  
- making it easier to change and maintain software  
- concrete instantiation: act of instantiating a class to create an object of a specific type  
- a factory object whose role is to create product objects of a particular type  
- factory object cuts down redundant code when multiple clients are instantiating same set of classes  
- specialized factories by having sub-classes of factory class can also be created  
- generaliztion is encouraged, coding to an interface not an implementation  
- Factory method pattern does creation of specifc types of objects in a separate way wrt factory object pattern  
- instead of using factory object to create objects, factory method uses separate methods in the same class to create the objects  
- factory method defines an interface for creating objects by leting subclass decide which class to instantiate  
- here the subclasses decide how objects are made  




