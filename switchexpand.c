#include <stdio.h>
/* D.1 Level 1 number 4 (switchexpand.c) - introducing switch case; not in a good way */
int main()
{
	int myNum;
	printf("Enter a number between 0 & 5: \n");
	scanf("%d", &myNum);
	switch(myNum)
	{
	case 1:
		printf("A special kind of number is 1 \n" );
		break;
	case 2:
		printf("Is a prime \n" );
		break;
	case 3:
		printf("Is a prime \n" );
		break;
	case 4:
		printf("Is a prime \n" );
		break;
	default:
		printf("I said a number between 0 & 5 \n" );
		break;
	}
	return 0;
}
