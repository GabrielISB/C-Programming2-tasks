Identify the exchange of parameters in subprograms

**BY REFERENCE**
When a parameter is passed by reference, the caller and the callee use the same variable for the parameter. 
If the callee modifies the parameter variable, the effect is visible to the caller's variable.

A reference parameter "refers" to the original data in the calling function.
Thus any changes made to the parameter are ALSO MADE TO THE ORIGINAL variable. Arrays are always pass by reference in C. Any change made to the parameter containing the array will change the value of the original array.
         
 
        // 
        // C++ using Reference Parameter! 
        // 
        void 
        doit( int & x ) 
        { 
             x = 5; 
        } 
 
 
        // 
        // Test code for passing by a variable by reference 
        // 
        int 
        main() 
        { 
          int z = 27; 
          doit( z ); 
          printf("z is now %d\n", z); 
 
          return 0; 
        } 



**BY VALUE**

When a parameter is passed by value, the caller and callee have two independent variables with the same value.
If the callee modifies the parameter variable, the effect is not visible to the caller.

Pass by Value, means that a copy of the data is made and stored by way of the name of the parameter. 
Any changes to the parameter have NO affect on data in the calling function.

         
 
        // 
        // C function using pass by value. (Notice no &) 
        // 
        void 
        doit( int x ) 
        { 
             x = 5; 
        } 
 
        // 
        // Test function for passing by value (i.e., making a copy) 
        // 
        int 
        main() 
        { 
          int z = 27; 
          doit( z ); 
          printf("z is now %d\n", z); 
 
          return 0; 
        } 


Describe concepts and characteristics of programming recursive processes:

**Direct**

A function fun is called direct recursive if it calls the same function fun. 

// An example of direct recursion
void directRecFun()
{
    // Some code....

    directRecFun();

    // Some code...
}

**Indirect**

A function fun is called indirect recursive if it calls another function say fun_new and fun_new calls fun directly or indirectly. Difference between direct and indirect recursion has been illustrated in Table 1.


// An example of indirect recursion
void indirectRecFun1()
{
    // Some code...

    indirectRecFun2();

    // Some code...
}
void indirectRecFun2()
{
    // Some code...

    indirectRecFun1();

    // Some code...
}
