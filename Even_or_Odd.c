#include<stdio.h>
int main(){
    int a;
    printf("Enter any Number:\n");
    scanf("%d",&a);

    if(a%2==0){
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }
    //The above if-else condition can also be written using conditional operator as below
    // (a%2==0)?printf("Even\n"):printf("Odd\n");
    // It can also be used in print function directly     printf((a%2==0)?printf("Even\n"):printf("Odd\n"));
    // Synatx for conditional operator 
                        //       condition ? experession if : expression else ;
}