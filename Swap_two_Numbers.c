#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter Numbers to be swapped :\n");
    scanf("%d%d",&a,&b);
    printf("Before Swaping \n");
    printf("A : %d B :%d \n",a,b);
    temp = a;
    a = b;
    b = temp;
    printf("After Swaping \n");
    printf("A : %d B : %d",a,b);
}