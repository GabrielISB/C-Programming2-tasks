On this document we'll make asummary of all the concepts we'll see on the first unit of Programming 2,
besides explain the concepts and give the references.
This MD document will be made by Gabriel Salazar, Ivan Aguilar and Angel Cabrera

[Structured Programming](https://searchsoftwarequality.techtarget.com/definition/structured-programming-modular-programming)
: Structured programming (sometimes known as modular programming) is a programming paradigm that facilitates 
  the creation of programs with readable code and reusable components.
  All modern programming languages support structured programming, but the mechanisms of support, like the syntax of the programming languages, varies.


[Declarative programming](https://codeforwin.org/2017/05/various-programming-paradigms.html)
:Declarative programming focuses on the logic of computation neglecting the control flow. It specifies what the result should be,
without specifying how to obtain the result. Declarative programming generally does not contain if-else, loops and other control flow statements.

[Functional programming](https://medium.com/swlh/introduction-to-programming-paradigms-aafcd6b418d6)
:Functional Programming a programming paradigm that treats computation as an evaluation of mathematical functions, avoiding
changing-state and mutable data. No side effect and more comfortable to debug. It is taking some inputs from whatever arguments,
and it returns the output value (data goes in, and data comes out). The functions do not modify any values outside the scope of that function,
and the functions themselves are not affected by any values outside their scope.

[Dataflow Programming](https://www.researchgate.net/publication/281777036_Dataflow_Programming_Concept_Languages_and_Applications)
:Dataﬂow Programming (DFP). The paradigm models computer programs as a direct graph, promoting the application of dataﬂow diagram principles to computation,
opposing the more linear and classical Von Neumann model. DFP is the core to most visual programming languages, which claim to be able to provide
end-user programming: with it’s visual interface, it allows non-technical users to extend or create applications without programming knowledges.
Also, DFP is capable of achieving parallelization of computation without introducing development complexity, resulting in an increased performance of
applications built with it when using multi-core computers.

A [template controls](https://whatis.techtarget.com/definition/template)
the overall look and layout of a site. It provides the framework that brings together common elements, modules and components as well as providing the cascading style sheet for the site. Both the front-end and the back-end of the site have templates.
Here are some examples:
A ruler is a template when used to draw a straight line.
A document in which the standard opening and closing parts are already filled in is a template that you can copy and then fill in the variable parts.
An overlay that you put on your computer keyboard telling you special key combinations for a particular application is a template for selecting the right keys to press.
Flowcharting templates (not used much now) help programmers draw flowcharts or logic sequences in preparation for writing the code.
In programming, a template is a generic class or other unit of source code that can be used as the basis for unique units of code. In C++, an object-oriented computing language, there are Standard Template Libraries from which programmers can choose individual template classes to modify. The Microsoft Foundation Class Library (MFCL) is an example.

A [Von Neumann language](https://medium.com/luteceo-software-chemistry/can-programming-be-liberated-from-the-von-neumann-style-932ba107402b) is any of those programming languages that are high-level abstract isomorphic copies of von Neumann architectures. As of 2009, most current programming languages fit into this description, likely as a consequence of the extensive domination of the von Neumann computer architecture during the past 50 years.
The differences between Fortran, C, and even Java, although considerable, are ultimately constrained by all three being based on the programming style of the von Neumann compute. If, for example, Java objects were all executed in parallel with asynchronous message passing and attribute-based declarative addressing, then Java would not be in the group.
The isomorphism between von Neumann programming languages and architectures is in the following manner:
program variables ↔ computer storage cells
control statements ↔ computer test-and-jump instructions
assignment statements ↔ fetching, storing instrustructions

[Scripted or interpreted](https://www.geeksforgeeks.org/whats-the-difference-between-scripting-and-programming-languages/) Basically, all scripting languages are programming languages. The theoretical difference between
 the two is that scripting languages do not require the compilation step and are rather interpreted. 
For example, normally, a C program needs to be compiled before running whereas normally, a scripting language like JavaScript or PHP need not be compiled.
 
[Object oriented programming, OOP](https://www.webopedia.com/TERM/O/object_oriented_programming_OOP.html) Object-oriented programming (OOP) refers to a type of computer programming (software design) in which programmers define the data type of a data structure, and also the types of operations (functions) that can be applied to the data structure.

In this way, the data structure becomes an object that includes both data and functions. In addition, programmers can create relationships between one object and another. For example, objects can inherit characteristics from other objects.



[Interpreted programming](https://www.freecodecamp.org/news/compiled-versus-interpreted-languages/)Interpreters run through a program line by line and execute each command. Here, if the author decides he wants to use a different kind of olive oil, he could scratch the old one out and add the new one. Your translator friend can then convey that change to you as it happens.
Examples of common interpreted languages are PHP, Ruby, Python, and JavaScript.

[Compiled programming](https://www.freecodecamp.org/news/compiled-versus-interpreted-languages/)  Compiled languages are converted directly into machine code that the processor can execute. As a result, they tend to be faster and more efficient to execute than interpreted languages. They also give the developer more control over hardware aspects, like memory management and CPU usage.
Compiled languages need a “build” step – they need to be manually compiled first. You need to “rebuild” the program every time you need to make a change. In our hummus example, the entire translation is written before it gets to you. If the original author decides that he wants to use a different kind of olive oil, the entire recipe would need to be translated again and resent to you.
