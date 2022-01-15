#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
    // taking input from the user
    int marks;
    printf("Enter your marks: \n");
    scanf("%d",&marks);
    //if-else-if ladder
    if (marks<=100 && marks>=85)
    {
       printf("Congratulation! you are pass with Grade A and your marks is %d",marks);
    }
    else if(marks<85 && marks>=70)
    {
       printf("Congratulation! you are pass with Grade B and your marks is %d",marks);
    }
    else if (marks<70 && marks>=55)
    {
       printf("Congratulation! you are pass with Grade C and your marks is %d",marks);
    }
    else if (marks<55 && marks>=40)
    {
       printf("Congratulation! you are pass with Grade D and your marks is %d",marks);
    }
    else if (marks>=100)
    {
      printf("invalid marks");
    }
    
    else{
        printf("You are Fail! and your Grade F");
    }
    
    return 0;
}
