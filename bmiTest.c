// Bmi test
#include<stdio.h>
int main(){
    float height,weight,bmi;
    printf("Enter your weight : ");
    scanf("%f",&weight);
    printf("Enter your height : ");
    scanf("%f",&height);
    bmi = weight / (height * height);

    	if(bmi < 18.5){
		printf("Cetagory : Underweight");
	}
	else if(bmi >=18.5 && bmi < 25){
		printf("Cetagory : Normal");
	}
	else if(bmi >= 25){
		printf("Cetagory : Overweight");
	}
	else{
		printf("Cetagory : Obese");
	}
    return 0;
}