#include <stdio.h>
#include <stdlib.h>

#define flush fflush(stdin); fflush(stdout);

/*************************** Homework 1 **************************/
//EX1:
void ex1()
{
	printf("***EX1_Homework1***\n");
	printf(" C programming\n\n");
}


//EX2:
void ex2()
{
	printf("***EX2_Homework1***\n");
	int num;
	printf("Enter an integer: ");
	flush
	scanf("%d",&num);

	printf("You entered: %d\n\n",num);
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
	printf("***EX5_Homework1***\n");
	char c;
	printf("Enter a character: ");
	flush
	scanf("%c", &c);
	printf("ASCII value of %c = %d\n\n",c,(int)c);
}


//EX7: swapping without using temp variable
void ex7()
{
	printf("***EX7_Homework1***\n");
	float a, b;
	printf("Enter the value of a: ");
	flush
	scanf("%f",&a);
	printf("Enter the value of b: ");
	flush
	scanf("%f",&b);

	a=a+b;
	b=a-b;
	a=a-b;

	printf("\nNew value of a is: %f\n\n", a);
	printf("New value of b is: %f\n\n", b);

}


/******************************************************************************************************************************/
/************************** Homework 2 ******************************/
//Ex1:
void ex_1()
{
	printf("***EX1_Homework2***\n");
	int num;
	printf("Enter an integer you want to check: ");
	flush
	scanf("%d", &num);

	if(num%2==0)
		printf("%d is even\n\n", num);
	else
		printf("%d is odd\n\n", num);
}


//Ex2:
void ex_2()
{
	printf("***EX2_Homework2***\n");
	char c;
	printf("Enter an alphabet: ");
	flush
	scanf("%c", &c);

	switch(c)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'A':
	case 'E':
	case 'I':
	case 'O':
		printf("%c is a vowel.\n\n", c);
		break;
	default:
		printf("%c is a consonant.\n\n", c);
		break;
	}
}


//Ex3:
void ex_3()
{
	printf("***EX3_Homework2***\n");
	float num1,num2,num3,max;
	printf("Enter three numbers: ");
	flush
	scanf("%f %f %f", &num1, &num2, &num3);

	max = num1;
	if(num2>max)
		max=num2;
	if(num3>max)
		max=num3;
	printf("Largest number: %f\n\n",max);
}


//Ex5:
void ex_5()
{
	char c;
	printf("***EX5_Homework2***\n");
	printf("Enter a character: ");
	flush
	scanf("%c", &c);

	if((c>'a' && c<'z') || (c>'A' && c<'Z'))
		printf("%c is an alphabet\n\n", c);
	else
		printf("%c is not an alphabet\n\n",c);
}


//Ex7:
void ex_7()
{
	int num, fact=1;
	printf("***EX7_Homework2***\n");
	printf("Enter a number: ");
	flush
	scanf("%d",&num);

	if(num>0)
	{
		for(int i=num; i>0; i--)
		{
			fact*=i;
		}
		printf("factorial = %d\n\n", fact);
	}
	else if(num==0)
		printf("factorial = 1\n\n");
	else
		printf("error!!! factorial of a negative number does not exist\n\n");
}


//Ex8
void ex_8()
{
	char c;
	float num1, num2;
	printf("***EX8_Homework2***\n");
	printf("Enter an operator, either + or - or * or divide(/): ");
	flush
	scanf("%c",&c);

	printf("Enter two operands: ");
	flush
	scanf("%f %f",&num1,&num2);

	switch(c)
	{
	case '+':
		printf("%f + %f = %f\n\n",num1, num2, (num1+num2));
		break;
	case '-':
			printf("%f - %f = %f\n\n",num1, num2, (num1-num2));
			break;
	case '*':
			printf("%f * %f = %f\n\n",num1, num2, (num1*num2));
			break;
	case '/':
			if(num2!=0)
				printf("%f / %f = %f\n\n",num1, num2, (num1/num2));
			else
				printf("error! operand 2 = 0\n\n");
			break;
	default:
			printf("please enter one of the mentioned operators\n\n");
			break;
	}

}



/******************************************************* main ******************************************************************/
int main(void)
{

//	Homework 1:
	ex1();

	ex2();

//	ex3:
	printf("***EX3_Homework1***\n");
	int num1, num2;
	printf("Enter two integers: ");
	flush
	scanf("%d",&num1);
	scanf("%d",&num2);
	printf("%d\n\n", ex3(num1,num2));

	ex5();

	ex7();

//	Homework 2:

	ex_1();

	ex_2();

	ex_3();

	ex_5();

	ex_7();

	ex_8();

	return 0;
}
