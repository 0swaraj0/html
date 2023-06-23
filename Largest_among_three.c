#include<stdio.h>
int main (){
    int num1,num2,num3;
    printf("Enter Three Numbers :\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    num1>num2 ? (num1>num3 ? printf("%d is Largest \n",num1):printf(" %d Largest \n",num3)):(num2>num3 ? printf(" %d is Largest \n",num2):printf(" %d is Largest \n",num3));
    //using conditonal operator may reduce line of code but increase the readability confusions same line of code can be written in 'Nested if-else' conditions and 'Arrays'
}