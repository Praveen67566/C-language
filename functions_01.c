#include<stdio.h>

int sum_of_digit(int num){

    if (num!=0)
    {
       return (num%10 + sum_of_digit(num/10));
    }
    else{
        return 0;
    }
}
int main(){
int num;
printf("Enter the number :\n");
scanf("%d",&num);
printf("the sum of digit is %d",sum_of_digit(num));

return 0;
}
