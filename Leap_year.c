#include<stdio.h>
#include<math.h>
int leap_year(int);

int main(){
    int year;
    scanf("%d",&year);
    leap_year(year);
}

int leap_year(int year){
    if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)){
        printf("%d is Leap year\n",year);
    }
   else{
        printf("%d is NOT Leap year\n",year);
   }
}