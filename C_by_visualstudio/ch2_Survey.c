#include<stdio.h>

int main() {

	char name[256];
	printf("What's your name?");
	scanf_s("%s", name, (unsigned int)sizeof(name));

	int age;
	printf("How old are you?");
	scanf_s("%d", &age);

	double height;
	printf("How tall are you?");
	scanf_s("%lf", &height);

	float weight;
	printf("How many kilograms do you weigh?");
	scanf_s("%f", &weight);

	char what[256];
	printf("What kind of exercise do you do?");
	scanf_s("%s", what, (unsigned int)sizeof(what));

	printf("\n\n--- Respondent Information ---\n\n");
	printf("name    : %s\n", name);
	printf("age    : %d\n", age);
	printf("height       : %.1lf\n", height);
	printf("weight : %.1f\n", weight);
	printf("exercise : %s\n", what);

	return 0;
}