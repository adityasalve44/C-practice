#include<stdio.h>

int main(){

	int number,i, first = 0 ,second = 1, third;

	printf("Enter the number of terms : ");
	scanf("%d",&number);

	for(i =1; i<= number;i++){
		printf("%d \t",first);
		third = first + second;
		first = second;
		second = third;
	}

}
