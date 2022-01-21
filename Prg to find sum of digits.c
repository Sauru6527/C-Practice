/*
    NAME:AHER SAURABH SANTOSH   CREATED ON:21 JANUARY 2022
    TIME:8:39 PM     
    QUESTION:
    Program for Sum of the digits of a given number

Given a number, find sum of its digits.

Examples : 

Input : n = 687 Output : 21 Input : n = 12 Output : 3


*/

#include<stdio.h>

int main()
{
   int num=0;int c,sum=0;

   printf("ENTER NUMBER\a = ");
   scanf("%d\a",&num);
  
   while(num!=0) 
   {
     sum=sum+num%10;
     num=num/10;
   }
    
    printf("%d",sum);
    return 0;
}