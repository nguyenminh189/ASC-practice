#include<stdio.h>
int isEvenNumber(int Number){
	if (Number%2 == 0 && Number >0)
		printf("%d\n", Number);
}

int main(){
	int Number, n, m;
	printf("please, enter a number:");
	printf("\n +n: ");
	scanf("%d", &n);
	printf("\n +m: ");
	scanf("%d", &m);
	
	printf("The even numbers between %d and %d: ", n, m);
		for (Number>=n; Number<=m; Number++){
		
			isEvenNumber(Number);
		}
}
