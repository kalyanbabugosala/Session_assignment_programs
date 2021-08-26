//Using pointers
/*#include <stdio.h>
void compare(int a, int b, int *add_great, int *add_small)
{
	if (a > b) {

		*add_great = a;
		*add_small = b;
	}
	else {
		*add_great = b;
		*add_small = a;
	}
}

int main()
{
	int great, small, x, y;

	printf("Enter two numbers: \n");
	scanf("%d%d", &x, &y);
	compare(x, y, &great, &small);
	printf("\nThe greater number is %d and the smaller number is %d",
		great, small);

	return 0;
}*/

#include <stdio.h>
#define SIZE 10
int * getNEvenNumbers(const int N, int * numbers);
int main()
{
    int evenNumbers[SIZE];
    int i;

    getNEvenNumbers(SIZE, evenNumbers);

    printf("First %d even numbers are: \n", SIZE);
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", *(evenNumbers + i));
    }    
    return 0;
}

int * getNEvenNumbers(const int N, int * numbers)
{
    int i;

    for (i = 0; i < N; i++)
    {
	    *(numbers + i) = 2 * (i + 1);
    }

    return numbers;
}

