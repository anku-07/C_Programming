// Write a program in c to check whether a given number is divisable by 5 and 11 or not.

#include<stdio.h>
int main(){
	int num;
	printf("Enter an number : ");
	scanf("%d",&num);
	
	if(num % 5 == 0 && num % 11 == 0){
		printf("%d This number is divisabel by 5 & 11",num);
	}
	else{
		printf("% this number is not divisabel by 5 & 11",num);
	}
	return 0;
}
