#include<stdio.h>
int isEvenNumber(int Number){
	if (Number%2 == 0)
		printf("1");
	else 
		printf("O");
}

int main () {
	int Number;
	printf("Enter the number: ");
	scanf("%d", &Number);
	
	isEvenNumber(Number);
	
}
