#include<stdio.h>

int main(){
    //printing following pattern
    //01 
    //0101 
    //010101
    //01010101 
    //0101010101 
    //010101010101

    for (int i = 0; i<=5; i++)
    {
       for (int j = 0; j<=i; j++)
       {
          printf("0");
          printf("1");
       }
       printf("\n");
    }
    
}
