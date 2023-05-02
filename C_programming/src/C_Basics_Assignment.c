#include <stdio.h>
#include <stdlib.h>

/*********** Homework 1 ***********/

//EX1:
void ex1()
{
	printf(" C programming\n");
}


//EX2:
void ex2()
{
	int num;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	printf("You entered: %d",num);
}


//EX3:
int ex3(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}


//EX5:
void ex5()
{
	char c;
	printf("Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &c);
	printf("ASCII value of %c = %d\n",c,(int)c);
}


//EX7: swapping without using temp variable
void ex7()
{
	float a, b;
	printf("Enter the value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&a);
	printf("Enter the value of b: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&b);

	a=a+b;
	b=a-b;
	a=a-b;

	printf("\nNew value of a is: %f\n", a);
	printf("New value of b is: %f\n", b);

}


int main(void)
{

//	ex1();

//	ex2();

//	ex3:
//	int num1, num2;
//	printf("Enter two integers: ");
//	fflush(stdin); fflush(stdout);
//	scanf("%d",&num1);
//	scanf("%d",&num2);
//	printf("%d", ex3(num1,num2));

//	ex5();

//	ex7();

	return 0;
}
