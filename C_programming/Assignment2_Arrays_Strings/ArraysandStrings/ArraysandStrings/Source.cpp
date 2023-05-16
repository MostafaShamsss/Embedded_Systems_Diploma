#include "stdlib.h"
#include "stdio.h"
#include"string.h"


/************************************** Arrays ***************************************/
//Ex1
void Ex1_Arrays()
{
	const int n = 2;
	float arr1[n][n], arr2[n][n];

	printf("Enter the elements of the 1st matrix\n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("Enter a%d%d:", i+1, j+1);
			scanf_s("%f", &arr1[i][j]);
		}
	}

	printf("Enter the elements of the 2nd matrix\n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("Enter a%d%d:", i+1, j+1);
			scanf_s("%f", &arr2[i][j]);
		}
	}

	printf("Sum of Matrix:\n");
	for (int i = 0; i < 2; i++)
	{
		printf("\n");
		for (int j = 0; j < 2; j++)
		{
			printf("%.1f\t", (arr1[i][j] + arr2[i][j]));
		}
	}
}


//Ex2
void Ex2_Arrays()
{
	int n = 0;
	float arr[15], average=0;
	printf("Enter the numbers of data:\n");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("Enter number: \n");
		scanf_s("%f", &arr[i]);
		average += arr[i];
	}

	average /= n;
	printf("Average = %.2f", average);
}


//Ex3
void Ex3_Arrays()
{
	int m, n;
	printf("Enter the rows and columns of a matrix:");
	scanf_s("%d %d", &m, &n);
	
	//dynamic memory allocation for the array size to be specified by the user 
	int** array = (int**)malloc(m * sizeof(int*));
	for (int i = 0; i < m; i++)
	{
		array[i] = (int*)malloc(n * sizeof(int));
	}


	printf("Enter elements of a matrix:\n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("Enter element a%d%d: ", i + 1, j + 1);
			scanf_s("%d", &array[i][j]);
		}
	}

	printf("Entered matrix:\n");
	for (int i = 0; i < m; i++)
	{
		printf("\n");
		for (int j = 0; j < n; j++)
		{
			printf("%d\t", array[i][j]);
		}
	}

	printf("\nTranspose of a Matrix:");
	for (int i = 0; i < n; i++)
	{
		printf("\n");
		for (int j = 0; j < m; j++)
		{
			printf("%d\t", array[j][i]);
		}
	}


	//free the memory allocated to the array
	for (int i = 0; i < m; i++) {
		free(array[i]);
	}
	free(array);
}


//Ex4
void Ex4_Arrays()
{
	int size = 0, insertion = 0, location = 0;
	printf("Enter the number of elements: ");
	scanf_s("%d", &size);
	int* array = (int*)malloc(size * sizeof(int));

	for (int i = 0; i < size; i++)
	{
		array[i] = i + 1;
	}

	printf("Enter the element to be inserted: ");
	scanf_s("%d", &insertion);

	printf("Enter its location: ");
	scanf_s("%d", &location);

	array = (int*)realloc(array,(size+1) * sizeof(int));	//to resize the dynamically allocated array

	int counter = size;
	for (counter; counter >= location; counter--)
	{
		array[counter] = array[counter - 1];
	}
	array[counter] = insertion;

	for (int i = 0; i <= size; i++)
	{
		printf("%d ", array[i]);
	}


	free(array);
}


//Ex5
void Ex5_Arrays()
{
	int size = 0, search = 0;
	printf("Enter the number of elements: ");
	scanf_s("%d", &size);
	int* array = (int*)malloc(size * sizeof(int));
	for (int i = 0; i < size; i++)
	{
		array[i] = (i + 1)*11;
	}

	printf("Enter the element to be searched: ");
	scanf_s("%d", &search);

	for (int i = 0; i < size; i++)
	{
		if (array[i] == search)
		{
			printf("Number found at location: %d", i + 1);
			break;
		}
	}

	free(array);
}



/************************************* Strings ***************************************/
//Ex1
void Ex1_Strings()
{
	char text[30], c = 0;
	printf("Enter a string: ");
	fgets(text, sizeof(text),stdin);
	printf("Enter a character to find its frequency: ");
	scanf_s("%c", &c, 1);

	int i = 0, counter = 0;
	while (text[i] != 0)
	{
		if (text[i] == c)
			counter++;
		i++;
	}

	printf("Frequency of %c is %d\n", c, counter);
}


//Ex2
void Ex2_Strings()
{
	int len = 0, i=0;
	char text[30];
	printf("Enter a string: ");
	fgets(text, sizeof(text), stdin);

	while (text[i] != 0)
	{
		len++;
		i++;
	}
	len--;					//because fgets() adds a newline character '\n' to the string before the NULL character

	printf("Length of your String is: %d", len);
}


//Ex3
void Ex3_Strings()
{
	char text[30], newText[30] = {0};
	printf("Enter a string: ");
	fgets(text, sizeof(text), stdin);		//take care that fgets adds the \n character to the string, so its length includes extra 1

	for (int i = 0, j = strlen(text)-2; i < strlen(text)-1; i++, j--)
	{
		newText[i] = text[j];
	}

	printf("%s", newText);
}


/************************************** Main *****************************************/
int main()
{
	printf("Exercise 1_Arrays:\n");
	Ex1_Arrays();
	printf("\n\nExercise 2_Arrays:\n");
	Ex2_Arrays();
	printf("\n\nExercise 3_Arrays:\n");
	Ex3_Arrays();
	printf("\n\nExercise 4_Arrays:\n");
	Ex4_Arrays();
	printf("\n\nExercise 5_Arrays:\n");
	Ex5_Arrays();

	printf("\n\nExercise 1_Strings:\n");
	Ex1_Strings();
	printf("\n\nExercise 2_Strings:\n");
	Ex2_Strings();
	printf("\n\nExercise 3_Strings:\n");
	Ex3_Strings();

	return 0;
}