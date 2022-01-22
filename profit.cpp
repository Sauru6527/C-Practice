/*
    NAME:AHER SAURABH SANTOSH 
	CREATED ON:22 TH JANUARY 2021 TIME:6:37PM (SATURDAY)
    If cost price and selling price of a item are input through the keyword write 
    a program to determine whether the seller has made profit or incurred loss .
    how much profit he has made.
*/
#include<stdio.h>
int main()
{
	int purprice=0;
	int sellprice=0;
	int proflos;
	
	printf("\nENETER PURCHASE PRICE =  ");
	scanf("%d",&purprice);
	
	printf("\nENETER  SELLPRICE =  ");
	scanf("%d",&sellprice);
	
	proflos=sellprice-purprice;
	
	if(proflos>0)
	{
		printf("\nPROFIT = %d",proflos);
	}
	
     else
	 {
	 	printf("\nLOSS = %d",proflos);	 	
     } 	
	
	return 0;
}		
