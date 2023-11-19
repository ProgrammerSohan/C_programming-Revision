#include<stdio.h>
int main(){
    char name1[20];
    char name2[20];
    printf("Enter First Name: ");
    scanf("%s",name1);
    printf("Enter Last name: ");
    scanf("%s",name2);
    printf("Thank you %s %s. You are welcome in C programming",name1,name2);
    return 0;

}
