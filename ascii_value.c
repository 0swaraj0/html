#include<stdio.h>
int main(){
    char a;                                         //Here a is not charater but it is variable to store character data_type 
    printf("Enter any charater :");
    scanf("%c",&a);
    printf("ASCII value of %c is : %d\n",a,a);      // %c is Format specifier for char Datatype whereas %d of a character returns the ASCII value of character
    return 0;
}