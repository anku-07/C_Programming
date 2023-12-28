// Write a function to calculate percentage of a student from marks in science,Math & sanskrit.
#include<stdio.h>
int calculatePercentage(int science,int math,int sanskrit);

int main(){
    int sc = 95;
    int mt = 99;
    int sanskrit = 99;
    int result =calculatePercentage(sc,mt,sanskrit);
    printf("Percentage is %d",result);

    return 0;
}

int calculatePercentage(int science,int math,int sanskrit){
    int percentage = (science + math + sanskrit) /3;
    return percentage;
}