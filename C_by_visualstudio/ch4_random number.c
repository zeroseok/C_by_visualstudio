#include <time.h> 
#include <stdlib.h> 
#include <stdio.h>

int main()
{
	srand(time(NULL)); //srand는 난수 발생기의 시드를 설정함. 현재 시각은 실행할때마다 달라짐.
	int num = rand() % 100 + 1;
	printf("Correct answer : %d\n", num);
	int answer = 0; 
	int chance = 5; 

	while (1)
	{
		printf("the remaining opportunities %d\n", chance--);
		printf("Get the numbers right.(1~100) : ");
		scanf_s("%d", &answer); 

		if (answer > num) 
		{
			printf("DOWN ↓\n\n");
		}
		else if (answer < num) 
		{
			printf("UP ↑\n\n");
		}
		else if (answer == num)
		{
			printf("That's correct!!\n\n");
			break;
		}
		else
		{
			printf("An unknown error has occurred.\n\n");
		}

		if (chance == 0) 
		{
			printf("You took advantage of every opportunity. Unfortunately, you failed.\n");
			break;
		}
	}

	return 0;
}