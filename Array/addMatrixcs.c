// Write a program in c to add two matrixcs
#include<stdio.h>
int main(){
    int i,j,r,c;
    printf("Enter number of row & collummn : ");
    scanf("%d %d",&i,&j);
    int a[i][j],b[i][j],add[i][j];
    printf("Enter value A : ");
    for(r = 1; r <= i; r++){
        for(c = 1; c <= j; c++){
            scanf("%d"&a[r][c]);
        }
    }
    printf("Enter value B : ");
    for(r = 1; r <= i; r++){
        for(c = 1; c <= j; c++){
            scanf("%d",&b[r][c]);
        }
    }

    for(r = 1; r <= i; r++){
        for(c = i;c <= j; c++){
            add[r][c] = a[r][c] + b[r][c];
        }
    }
    printf("Values are : ");
    printf("\n");
    for(r = 1;r <= i;r++){
        for(c = 1; c <= j; c++){
            printf(" %d ",add[r][c]);
        }
        printf("\n");
    }
    return 0;
}