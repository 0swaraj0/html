#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter Dividend and Divisor :\n");
    scanf("%d%d",&a,&b);                           
    printf("Quotient :%d\n",a/b);                   //Data_types and Format specifiers of type must be taken care else It throughs garbage values
    c = a%b;                                        // mod operator cannot be applied for floating values it gives an error of " Invalid operands to binary % (have 'float' and 'float') "
    printf("Remainder :%d\n",c);
    return 0;                                       // return indicates the successfull completion of main program and it returns value from function declared in
}