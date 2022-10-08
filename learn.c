#include <stdio.h> //header file library

int main() {        //int main is the function any code inside the curly brackets will be executed
  printf("Hello World!\nu are awesome\n"); //printf is also a function
  printf("I am learning C.\n"); //\n used to create a new line 
  printf("learn c\n");    //every c program ends with a cemicolon(;)
 
/* The newline character (\n) is called an escape sequence, 
and it forces the cursor to change its position to the beginning of the next line on the screen.
 This results in a new line.*/

 //c variables

 /*
 Variables are containers for storing data values.

In C, there are different types of variables (defined with different keywords), for example:

    int - stores integers (whole numbers), without decimals, such as 123 or -123
    float - stores floating point numbers, with decimals, such as 19.99 or -19.99
    char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes

syntax:
type variableName = value; 
Where type is one of C types (such as int), and variableName is the name of the variable (such as x or myName).
 The equal sign is used to assign a value to the variable.
 */

int number;
number = 10;
printf("%d\n", number); 
/*Format specifiers are used together with the printf() function to tell the compiler what type of data the variable is storing.
It is basically a placeholder for the variable value.
A format specifier starts with a percentage sign %, followed by a character.
to output the value of an int variable, you must use the format specifier %d or %i surrounded by double quotes, inside the printf() function:
To print other types, use %c for char and %f for float:*/
printf("my number is:%d\n", number);

char name;
name= 's';
printf("%c\n", name);
printf("my name is:%c\n", name);

float test;
test= 10.0;

printf("the float is:%f\n", test);
printf("my name is:%c and my number is:%d \n", name, number);

//add veriables together
int x=2;
int y=5;
int sum= x + y;
printf("%d \n", sum);

/*
The general rules for naming variables are:

    Names can contain letters, digits and underscores
    Names must begin with a letter or an underscore (_)
    Names are case sensitive (myVar and myvar are different variables)
    Names cannot contain whitespaces or special characters like !, #, %, etc.
    Reserved words (such as int) cannot be used as names

*/

//data types
/*there are 3 types of data types mainly
int
float
char
*/
//create veriables
int num= 5;
float decimal= 8.5;
char letter='a';

//print veriables
printf("%d\n", num);
printf("%f\n", decimal);
printf("%c\n", letter);

/*basic datatypes
int 	2 or 4 bytes 	Stores whole numbers, without decimals
float 	4 bytes 	Stores fractional numbers, containing one or more decimals. Sufficient for storing 7 decimal digits
double 	8 bytes 	Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits
char 	1 byte 	Stores a single character/letter/number, or ASCII values


basic format specifiers

Format Specifier 	Data Type 
%d or %i 	            int 	
%f                	 float 	
%lf 	              double 	
%c 	                 char 	
%s 	                Used for strings (text), which you will learn more about in a later chapter
*/

//c constants
/*
When you don't want others (or yourself) to override existing variable values, 
use the const keyword (this will declare the variable as "constant", which means unchangeable and read-only):

syntax:
const type variable_name = value
*/

const int ver= 10;
printf("value is constant:%d\n", ver);
const birthyear= 1999;
printf("birthyear is constant:%d\n", birthyear);

//c operators

/*Operators are used to perform operations on variables and values.

In the example below, I use the + operator to add together two values:*/

int myNum= 10 + 5;
printf("myNum is:%d\n", myNum);

int mysum= 10 + 5;
int mysum2= mysum + 1;
int mysum3= mysum2 + 1;

printf("mysum3 is:%d\n", mysum3);

/*
C divides the operators into the following groups:

    Arithmetic operators
    Assignment operators
    Comparison operators
    Logical operators
    Bitwise operators

Operator 	Name 	          Description 	                    Example
+ 	    Addition 	      Adds together two values 	           x + y 	
- 	    Subtraction     Subtracts one value from another 	   x - y 	
* 	    Multiplication 	Multiplies two values 	             x * y 	
/ 	    Division 	      Divides one value by another 	       x / y 	
% 	    Modulus 	      Returns the division remainder 	     x % y 	
++ 	    Increment     Increases the value of a variable by 1 	++x 	
-- 	    Decrement     decreases the value of a variable by 1 	--x

assignment operator
Assignment operators are used to assign values to variables.

= is a assignment variable


A list of all assignment operators:
Operator 	Example 	Same As 	
= 	        x = 5 	x = 5 	
+=        	x += 3 	x = x + 3 	
-= 	        x -= 3 	x = x - 3 	
*= 	        x *= 3 	x = x * 3 	
/= 	        x /= 3 	x = x / 3 	
%= 	        x %= 3 	x = x % 3 	
&= 	        x &= 3 	x = x & 3 	
|= 	        x |= 3 	x = x | 3 	
^= 	        x ^= 3 	x = x ^ 3 	
>>= 	     x >>= 3 	x = x >> 3 	
<<= 	    x <<= 3 	x = x << 3
*/
int a = 10;
printf("the value is:%d\n", a);

//comparison operator

/*
Comparison operators are used to compare two values.
The return value of a comparison is either true (1) or false (0).
*/

int b= 2;
int c= 3;
printf("%d", b > c);

/*
Operator 	Name 	                   Example 
== 	      Equal to 	                x == y 	
!= 	      Not equal 	              x != y 	
> 	      Greater than 	            x > y 	
< 	      Less than 	              x < y 	
>= 	      Greater than or equal to 	x >= y 	
<= 	      Less than or equal to 	  x <= y

logical operator
Logical operators are used to determine the logic between variables or values:

Operator 	Name 	                      Description 	                              Example 	
&&  	Logical and 	Returns true if both statements are true 	                x < 5 &&  x < 10 	
||  	Logical or 	Returns true if one of the statements is true 	            x < 5 || x < 4 	
! 	  Logical not 	Reverse the result, returns false if the result is true 	!(x < 5 && x < 10)



sizeof operator
The memory size (in bytes) of a data type or a variable can be found with the sizeof operator:

Note that we use the %lu format specifer to print the result, instead of %d.
 It is because the compiler expects the sizeof operator to return a long unsigned int (%lu), instead of int (%d).
 On some computers it might work with %d, but it is safer to use %lu.
*/

int myInt;
float myFloat;
double myDouble;
char myChar;

printf("%lu\n", sizeof(myInt));
printf("%lu\n", sizeof(myFloat));
printf("%lu\n", sizeof(myDouble));
printf("%lu\n", sizeof(myChar)); 


//c if, else condition

/*
    Use if to specify a block of code to be executed, if a specified condition is true
    Use else to specify a block of code to be executed, if the same condition is false
    Use else if to specify a new condition to test, if the first condition is false
    Use switch to specify many alternative blocks of code to be executed
*/



return 0; //ends the main function
} 


