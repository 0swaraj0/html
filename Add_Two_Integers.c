#include<stdio.h>
int main(){
    int a,b;      
    printf("\n Enter values of A and B :\n");          //  Declaring 'a' and 'b' as Integer Data type
    scanf(" %d", &a);                             //  'scanf' is input function 
    scanf(" %d", &b);                                                             // '%d' is format specifier for int data_tye 
    printf("Sum of A and B is : %d\n", a+b);         // 'printf' is function used to display outputs 
    return 0;
}