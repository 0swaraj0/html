#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c;
    double x1,x2,D,square_root,real,complex;                                        // sqrt() function returns double value so it is better to declare all the variale of type double to reduce the type_casting
    printf("Enter co-efficeints of equation ax2+bx+c = 0 :\n ");                    //type casting can be achieved by using  //   (Data_type_to_be)expression   //    example:  int a to be casted to float then b = (float)a
    scanf("%lf%lf%lf",&a,&b,&c);
    D = (b*b)-(4*a*c);
    if(D < 0){
        printf("No Real Roots for equation %.0lfx2 + %.0lfx + %.0lf\n Discriminant is less than 0\n ",a,b,c);
        real = -b/(2*a);
        complex = sqrt(D)/(2*a);
        printf(" x1 = %.2lf + %.2lf i : ",real,complex);
        printf(" x1 = %.2lf - %.2lf i : ",real,complex);
    }
    else if(D > 0){
        printf("Two Distinct and Real Roots of equation %dx2+%dx+%d are :",a,b,c);
        square_root = sqrt(D);
        x1 = (-b)+sqrt(D)/(2*a);
        x2 = (-b)-sqrt(D)/(2*a);
        printf("x1 = %.2lf  x2 = %.2lf  ",x1,x2);
    }
    else{
        x1 = x2 = (-b)/(2*a);
        printf("Equal and real roots \n ");
        printf("x1 = %.2lf  x2 = %.2lf",x1,x2);
    }
    return 0;

}