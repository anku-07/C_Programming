// Write a profram in c to print weekdays using switch case.
#include<stdio.h>
int main(){
    char number;
    printf("Enter weekdays (1-7) : ");
    scanf("%c",&number);

    switch (number)
    {
    case '1':printf("%c for Monday",number);
        break;
    case '2':printf("%c for Tuesday",number);
        break;
    case '3':printf("%c for Wednesday",number);
        break;
    case '4':printf("%c for Thrusday",number);
        break;
    case '5':printf("%c for Friday",number);
        break;
    case '6':printf("%c for Saturday",number);
        break;
    case '7':printf("%c for Sunday",number);
        break;
    default:printf("Enter valid weekdays.");
        break;
    }
    return 0;
}