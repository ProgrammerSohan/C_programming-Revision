#include<stdio.h>
int main(){
    int i,j;
    printf("Enter your number:");
    scanf("%d", &i);
    printf("Enter %d integer numbers:");
    for(j=0;j<=20;j=j+1)
    {
    printf("%d x %d=%d",i,j,i*j);
    printf("\n");

    }
    return 0;
}
