/*

  Question:     Any integer is 
           input through the keyboard.
         Write a program to find out whet
       her it is an odd number or even numbe 
                        r.
            NAME: AHER SAURABH SANTOSH
            CREATED BY:22 JANUARY 2021
            TIME:9:21PM
            */
#include<stdio.h>

int main()
{
     int num,rem;
    printf("ENTER NUMBER= ");
    scanf("%d",&num);
    
      rem = num % 2;
    
      printf("REMAINDER = %d\n",rem);
        
      if(rem==0)
        {
          printf("NUMBER IS EVEN \n");
        }
        
       else 
        {
          printf("NUMBER IS ODD \n");
        }
        
      return 0; 
}