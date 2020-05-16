On this document we'll make asummary of all the concepts we'll see on the first unit of Programming 2,
besides explain the concepts and give the references.
This MD document will be made by [Gabriel Salazar](https://github.com/GabrielISB/Programming2/blob/master/introstructuredprog.md), [Ivan Aguilar](https://github.com/aguilarj17/programming-/blob/master/Ivan.md) and [Angel Cabrera](https://github.com/AngelCG12/Programming2/blob/master/introstructuredprog.md)
<<<<<<< HEAD

##Programming Paradigms
=======
>>>>>>> 9bc0d30aca27a1cb6f3aee2c65d01e32cacc9f52

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

##Data Representations

[Identifiers](http://aboutc.weebly.com/identifiers.html) : Identifiers are names for entities in a C program, such as variables, arrays, functions, structures, unions and labels. An identifier can be composed only of uppercase, lowercase letters, underscore and digits, but should start only with an alphabet or an underscore. If the identifier is not used in an external link process, then it is called as internal. Example: Local variable. If the identifier is used in an external link process, then it is called as external. Example: Global variable

An identifier is a string of alphanumeric characters that begins with an alphabetic character or an underscore character that are used to represent various programming elements such as variables, functions, arrays, structures, unions and so on. Actually, an identifier is a user-defined word. There are 53 characters, to represent identifiers. They are 52 alphabetic characters (i.e., both uppercase and lowercase alphabets) and the underscore character. The underscore character is considered as a letter in identifiers. The underscore character is usually used in the middle of an identifier. There are 63 alphanumeric characters, i.e., 53 alphabetic characters and 10 digits.

**Identifiers rules** : 
1.     The first character in an identifier must be an alphabet or an underscore and can be followed only by any number alphabets, or digits or underscores.
2.     They must not begin with a digit.
3.     Uppercase and lowercase letters are distinct. That is, identifiers are case sensitive.
4.     Commas or blank spaces are not allowed within an identifier.
5.     Keywords cannot be used as an identifier.
6.     Identifiers should not be of length more than 31 characters.
7.     Identifiers must be meaningful, short, quickly and easily typed and easily read.

[Variable](https://www.geeksforgeeks.org/variables-and-keywords-in-c/): A variable in simple terms is a storage place which has some memory allocated to it. 
Basically, a variable used to store some form of data. Different types of variables require different amounts of memory, and have some specific set of operations which can be applied on them.

**Variable declaration** 
 type variable_name;
    or for multiple variables:
  type variable1_name, variable2_name, variable3_name;

**Keywords** : are specific reserved words in C each of which has a specific feature associated with it. Almost all of the words which help us use the functionality of the C language are included in the list of keywords. So you can imagine that the list of keywords is not going to be a small one!
auto       break    case     char     const     continue
   default    do       double   else     enum      extern
   float      for      goto     if       int       long
   register   return   short    signed   sizeof    static
   struct     switch   typedef  union    unsigned  void
   volatile   while 

**Const** : const can be used to declare constant variables. Constant variables are variables which, when initialized, can’t change their value. Or in other words, the value assigned to them cannot be modified further down in the program.

const data_type var_name = var_value; 

##Data Types

[Composite, primitive and abstract](https://www.quora.com/What-are-the-differences-between-primitive-and-composite-data-types-in-C++)

**Composite** : A composite data type is one whose values are composed of component values (possibly values chosen from other data types.)  Example of composite data type is array. 

For instance, array-of-int values is a composite type, because an array-of-int value is comprised of some number of element values chosen from the int type.  Using composite data types, we can manage multiple pieces of related data as a single datum.

**Primitive** :  Primitive data types are predefined types of data, which are supported by the programming language. Programmers can use these data types when creating variables in their programs. Primitive data types can hold text messages, numbers and so on, but they don't readily accommodate higher levels of complexity.  For example, a programmer may create a variable called "name" and define it as a string data type. The variable will then store data as a string of characters.

**Abstract** : Abstract data types are mathematical models of a set of data values or information that share similar behavior or qualities and that can be specified and identified independent of specific implementations. An abstract data type is defined in term of its data items or its associated operations rather than by its implementation.



## Data type conversion (Casting)

[Implicit and explicit](https://developerinsider.co/type-casting-c-programming/) 

**implicit** : When the type conversion is performed automatically by the compiler without programmers intervention, such type of conversion is known as implicit type conversion or type promotion.

int x;
for(x=97; x<=122; x++)
{
    printf("%c", x);   /*Implicit casting from int to char thanks to %c*/
}

**explicit** : The type conversion performed by the programmer by posing the data type of the expression of specific type is known as explicit type conversion. The explicit type conversion is also known as type casting.

Type casting in c is done in the following form:

(data_type)expression;

and then
####

int x;
for(x=97; x<=122; x++)
{
    printf("%c", (char)x);   /*Explicit casting from int to char*/
}

##Operators

[Types of Operators](https://www.programiz.com/c-programming/c-operators) 

**Arithmetic operators**	These are used to perform mathematical calculations like addition, subtraction, multiplication, division and modulus

####Like this

#include <stdio.h>
int main()
{
    int a = 9,b = 4, c;
    
    c = a+b;
    printf("a+b = %d \n",c);
    c = a-b;
    printf("a-b = %d \n",c);
    c = a*b;
    printf("a*b = %d \n",c);
    c = a/b;
    printf("a/b = %d \n",c);
    c = a%b;
    printf("Remainder when a divided by b = %d \n",c);
    
    return 0;
}

**Increment and decrement** C programming has two operators increment ++ and decrement -- to change the value of an operand (constant or variable) by 1.
{
    int a = 10, b = 100;
    float c = 10.5, d = 100.5;

    printf("++a = %d \n", ++a);
    printf("--b = %d \n", --b);
    printf("++c = %f \n", ++c);
    printf("--d = %f \n", --d);

    return 0;
}

**Assigment** : An assignment operator is used for assigning a value to a variable. The most common assignment operator is =

####Like this

{
    int a = 5, c;

    c = a;      // c is 5
    printf("c = %d\n", c);
    c += a;     // c is 10 
    printf("c = %d\n", c);
    c -= a;     // c is 5
    printf("c = %d\n", c);
    c *= a;     // c is 25
    printf("c = %d\n", c);
    c /= a;     // c is 5
    printf("c = %d\n", c);
    c %= a;     // c = 0
    printf("c = %d\n", c);

    return 0;
}

**Relational** : A relational operator checks the relationship between two operands. If the relation is true, it returns 1; if the relation is false, it returns value 0.

####Like this

{
    int a = 5, b = 5, c = 10;

    printf("%d == %d is %d \n", a, b, a == b);
    printf("%d == %d is %d \n", a, c, a == c);
    printf("%d > %d is %d \n", a, b, a > b);
    printf("%d > %d is %d \n", a, c, a > c);
    printf("%d < %d is %d \n", a, b, a < b);
    printf("%d < %d is %d \n", a, c, a < c);
    printf("%d != %d is %d \n", a, b, a != b);
    printf("%d != %d is %d \n", a, c, a != c);
    printf("%d >= %d is %d \n", a, b, a >= b);
    printf("%d >= %d is %d \n", a, c, a >= c);
    printf("%d <= %d is %d \n", a, b, a <= b);
    printf("%d <= %d is %d \n", a, c, a <= c);

    return 0;
}

** Logical ** : An expression containing logical operator returns either 0 or 1 depending upon whether expression results true or false. Logical operators are commonly used in decision making in C programming.

####like this

{
    int a = 5, b = 5, c = 10, result;

    result = (a == b) && (c > b);
    printf("(a == b) && (c > b) is %d \n", result);
    result = (a == b) && (c < b);
    printf("(a == b) && (c < b) is %d \n", result);
    result = (a == b) || (c < b);
    printf("(a == b) || (c < b) is %d \n", result);
    result = (a != b) || (c < b);
    printf("(a != b) || (c < b) is %d \n", result);
    result = !(a != b);
    printf("!(a == b) is %d \n", result);
    result = !(a == b);
    printf("!(a == b) is %d \n", result);

    return 0;
}



##Input and output functions in structured programming

[input and output](https://www.studytonight.com/c/c-input-output-function.php)

Input means to provide the program with some data to be used in the program and Output means to display data on screen or write the data to a printer or a file.

C programming language provides many built-in functions to read any given input and to display data on screen when there is a need to output the result.

In this tutorial, we will learn about such functions, which can be used in our program to take input from user and to output the result on screen.

All these built-in functions are present in C header files, we will also specify the name of header files in which a particular function is defined while discussing about it.

#### like this

-scanf()
-printf()
-gets()
-puts()
-getchar()
-putchar()

##Distributed Version Control

[DVCS](https://www.perforce.com/blog/vcs/what-dvcs-anyway) : A distributed version control system (DVCS) is a type of version control where the complete codebase — including its full version history — is mirrored on every developer's computer. It's abbreviated DVCS.

Changes to files are tracked between computers. For example, my workstation and yours. In the beginning, this required specific coordination strategies to maintain consistency in projects, so all the developers could keep track of what was happening to files at any given time.

** Git **

[Git as a DVCS](https://www.atlassian.com/git/tutorials/what-is-git) :
By far, the most widely used modern version control system in the world today is Git. Git is a mature, actively maintained open source project originally developed in 2005 by Linus Torvalds, the famous creator of the Linux operating system kernel. A staggering number of software projects rely on Git for version control, including commercial projects as well as open source. Developers who have worked with Git are well represented in the pool of available software development talent and it works well on a wide range of operating systems and IDEs (Integrated Development Environments).
