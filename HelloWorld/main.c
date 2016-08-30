/*  Name: Annalise Miller
	Date: 08/30/16
	CptS 121, Lab section 11
	Description:
	*/

#include <stdio.h>
int main(void)
{
	int num1_int = 0, num2_int = 0, add = 0, mod = 0, mod2 = 0, mod3 = 0;
	double num1_float = 0.0, num2_float = 0.0, subtract = 0, multiply = 0, divide1 = 0, divide2 =0, divide3 = 0;
	// Get 2 integers from the user
	printf("Please enter two integer values\n");
	scanf("%d%d", &num1_int, &num2_int);
	// Get 2 floating point numbers from the user
	printf("Please enter two floating point numbers\n");
	scanf("%lf%lf", &num1_float, &num2_float);
	
	// Add two integers together
	add = num1_int + num2_int;
	printf("integer1 + integer2 = %d\n", add);

	// Subract 2 floating point numbers, display answer as floating point number
	subtract = num1_float - num2_float;
	printf("float1 - float2 = %lf\n", subtract);

	// Multiply integer by floating point, display as integer
	multiply = num1_int * num2_float;
	printf("integer1 * float2 = %d\n", (int)multiply);

	// Divide integer by integer, print as integer and floating point
	divide1 = num1_int / num2_int;
	printf("%d\n", (int)divide1);
	printf("integer1 / integer2 = %lf\n", divide1);

	// Divide integer 1 by floating point 2, print as integer and floating point
	divide2 = num1_int / num2_float;
	printf("integer1/float2 = %d\n (integer)", (int)divide2);
	printf("integer1/float2 = %lf\n (floating point)", divide2);

	// Cast num1_int as floating point value and divide by num2_int, print as floating point value
	divide3 = (double)num1_int / num2_int;
	printf("integer1/integer2 = %lf\n (floating point)", divide3);

	// Mod num1_float by num2_float
	mod = (int)num1_float % (int)num2_float;
	printf("mod float1 by float2 = %d\n", mod);

	// Determine if integers are odd or even, print 0 if even, 1 if odd
	mod2 = num1_int % 2;
	mod3 = num2_int % 2;
	printf("Integers odd/even: %d\n", mod2);
	printf("Integers odd/even: %d\n", mod3);
	}