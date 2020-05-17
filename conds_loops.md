# SELECTIVE CONTROL STRUCTURES #

[Conditionals and Loops](https://www.guru99.com/c-if-else-statement.html)

There is likely no meaningful program written in which a computer does not demonstrate basic decision-making skills. It can actually be argued that there is no meaningful human activity in which some sort of decision-making, instinctual or otherwise, does not take place. 
For example, when driving a car and approaching a traffic light, one does not think, "I will continue driving through the intersection." 
Rather, one thinks, "I will stop if the light is red, go if the light is green, and if yellow go only if I am traveling at a certain speed a certain distance from the intersection." 
These kinds of processes can be simulated in C using conditionals.

A conditional is a statement that instructs the computer to execute a certain block of code or alter certain data only if a specific condition has been met.
The most common conditional is the If-Else statement, with conditional expressions and Switch-Case statements typically used as more shorthanded methods.

**Simple conditional** : Also called "If conditional" It is one of the powerful conditional statement. If statement is responsible for modifying the flow of execution of a program. 
If statement is always used with a condition. The condition is evaluated first before executing any statement inside the body of If. The syntax for if statement is as follows:

 if (condition) 
     instruction; 

The condition evaluates to either true or false. True is always a non-zero value, and false is a value that contains zero. Instructions can be a single instruction or a code block enclosed by curly braces { }.

int main()
{
	int num1=1;
	int num2=2;
	if(num1<num2)		//test-condition
	{
		printf("num1 is smaller than num2");
	}
	return 0;
}

**Double conditional** : Also called "If else", on this type of a construct, if the value of test-expression is true, then the true block of statements will be executed. If the value of test-expression if false, then the false block of statements will be executed. In any case, after the execution, the control will be automatically transferred to the statements appearing outside the block of If.

The if-else is statement is an extended version of If. The general form of if-else is as follows:

if (test-expression)
{
    True block of statements
}
Else
{
    False block of statements
}
Statements;

And a real example of a if else conditional in c would be :

int main()
{
	int num=19;
	if(num<10)
	{
		printf("The value is less than 10");
	}
	else
	{
		printf("The value is greater than 10");
	}
	return 0;
}

**Multiple conditional** : Nested if else statement: When a series of decision is required, nested if-else is used. Nesting means using one if-else construct within another one.

Let's write a program to illustrate the use of nested if-else.

int main()
{
	int num=1;
	if(num<10)
	{
		if(num==1)
		{
			printf("The value is:%d\n",num);
		}
		else
		{
			printf("The value is greater than 1");
		}
	}
	else
	{
		printf("The value is greater than 10");
	}
	return 0;
}

In nested if-else, we have to be careful with the indentation because multiple if-else constructs are involved in this process, so it becomes difficult to figure out individual constructs.
Proper indentation makes it easy to read the program.

**Nested conditional** : Nested else if statement; Apparently similar but not the same, Nested else-if is used when multipath decisions are required.

The general syntax of how else-if ladders are constructed in 'C' programming is as follows:

if (test - expression 1) {
    statement1;
} else if (test - expression 2) {
    Statement2;
} else if (test - expression 3) {
    Statement3;
} else if (test - expression n) {
    Statement n;
} else {
    default;
}
Statement x;


This type of structure is known as the else-if ladder. This chain generally looks like a ladder hence it is also called as an else-if ladder. 
The test-expressions are evaluated from top to bottom. Whenever a true test-expression if found, statement associated with it is executed. When all the n test-expressions becomes false, then the default else statement is executed.

int main()
{
	int marks=83;
	if(marks>75){
		printf("First class");
	}
	else if(marks>65){
		printf("Second class");
	}
	else if(marks>55){
		printf("Third class");
	}
	else{
		printf("Fourth class");
	}
	return 0;
}


# ITERATIVE CONTROL STRUCTURES #

Let's explain what is an [iteration](https://www.techopedia.com/definition/3821/iteration) : Iteration, in the context of computer programming, is a process wherein a set of instructions or structures are repeated in a sequence a specified number of times or until a condition is met. 
When the first set of instructions is executed again, it is called an iteration. When a sequence of instructions is executed in a repeated manner, it is called a loop.

Iteration is the repetition of a process in a computer program, usually done with the help of loops.
An example of an iteration programming language is as follows:

Consider a database table containing 1000 student records. Each record contains the following fields:

* First name
* Last name
* Roll no

[For loop](https://www.programiz.com/c-programming/c-for-loop) :

The syntax of the for loop is:

for (initializationStatement; testExpression; updateStatement)
{
    // statements inside the body of loop
}

How for loop works?

1.- The initialization statement is executed only once.
2.- Then, the test expression is evaluated. If the test expression is evaluated to false, the for loop is terminated.
3.- However, if the test expression is evaluated to true, statements inside the body of for loop are executed, and the update expression is updated.
4.- gain the test expression is evaluated.
5.- This process goes on until the test expression is false. When the test expression is false, the loop terminates.

To learn more about test expression (when the test expression is evaluated to true and false), check out relational and logical operators.

// Print numbers from 1 to 10

int main() {
  int i;

  for (i = 1; i < 11; ++i)
  {
    printf("%d ", i);
  }
  return 0;
}


[Nested For Loop](https://www.geeksforgeeks.org/nested-loops-in-c-with-examples/) : 

Nested loop means a loop statement inside another loop statement. That is why nested loops are also called as “loop inside loop“.

Syntax for Nested For loop:

for ( initialization; condition; increment ) {

   for ( initialization; condition; increment ) {
      
      // statement of inside loop
   }

   // statement of outer loop
}

In the above example we have a for loop inside another for loop, this is called nesting of loops. One of the example where we use nested for loop is Two dimensional array.


[While loop](https://www.programiz.com/c-programming/c-do-while-loops) : 

The syntax of the while loop is:

while (testExpression) 
{
    // statements inside the body of the loop 
}

How while loop works?

1.- The while loop evaluates the test expression inside the parenthesis ().
2.- If the test expression is true, statements inside the body of while loop are executed. Then, the test expression is evaluated again.
3.- The process goes on until the test expression is evaluated to false.
4.- If the test expression is false, the loop terminates (ends).
5.- To learn more about test expression (when the test expression is evaluated to true and false), check out relational and logical operators.

// Print numbers from 1 to 5

int main()
{
    int i = 1;
    
    while (i <= 5)
    {
        printf("%d\n", i);
        ++i;
    }

    return 0;
}

** Do While **

The do..while loop is similar to the while loop with one important difference. The body of do...while loop is executed at least once. Only then, the test expression is evaluated.

The syntax of the do...while loop is: 

do
{
   // statements inside the body of the loop
}
while (testExpression);

How do...while loop works?

1.- The body of do...while loop is executed once. Only then, the test expression is evaluated.
2.- If the test expression is true, the body of the loop is executed again and the test expression is evaluated.
3.- This process goes on until the test expression becomes false.
4.- If the test expression is false, the loop ends.

// Program to add numbers until the user enters zero

int main()
{
    double number, sum = 0;

    // the body of the loop is executed at least once
    do
    {
        printf("Enter a number: ");
        scanf("%lf", &number);
        sum += number;
    }
    while(number != 0.0);

    printf("Sum = %.2lf",sum);

    return 0;
}


[Continue intruction](https://beginnersbook.com/2014/01/c-continue-statement/) : The continue statement is used inside loops. 
When a continue statement is encountered inside a loop, control jumps to the beginning of the loop for next iteration, skipping the execution of statements inside the body of loop for the current iteration.

Continue Syntax :

continue;

// Example

int main()
{
   for (int j=0; j<=8; j++)
   {
      if (j==4)
      {
	    /* The continue statement is encountered when
	     * the value of j is equal to 4.
	     */
	    continue;
       }

       /* This print statement would not execute for the
	* loop iteration where j ==4  because in that case
	* this statement would be skipped.
	*/
       printf("%d ", j);
   }
   return 0;
}

[Break instruction](https://www.tutorialspoint.com/cprogramming/c_break_statement.htm) : The break statement in C programming has the following two usages −

When a break statement is encountered inside a loop, the loop is immediately terminated and the program control resumes at the next statement following the loop.
It can be used to terminate a case in the switch statement (covered in the next chapter). If you are using nested loops, the break statement will stop the execution of the innermost loop and start executing the next line of code after the block

Break syntax :

Break;

// Example

int main () {

   /* local variable definition */
   int a = 10;

   /* while loop execution */
   while( a < 20 ) {
   
      printf("value of a: %d\n", a);
      a++;
		
      if( a > 15) {
         /* terminate the loop using break statement */
         break;
      }
   }
 
   return 0;
}
