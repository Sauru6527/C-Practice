#include<stdio.h>
int main()
{
	int sham;
	int vijay;
	int ram;
	int num    = 0;
	int great1 = 0;
	int great  = 0;
	
	printf("ENTER SHAM AGE = ");
	scanf("%d",&sham);
	
	printf("ENTER VIJAY AGE= ");
	scanf("%d",&vijay);
	
	printf("ENTER RAM AGE  = ");
	scanf("%d",&ram);
	
    if((sham > vijay) && (sham > ram))
    {
    	printf("SHAM IS GREATER (%d)",sham);
    	
	}
	
	else if((vijay > sham) && (vijay > ram))
	{
		printf("VIJAY IS GREATER (%d)",vijay);
	}
	
	else
	{
		printf("RAM IS GREATER  (%d)",ram);
	}
	return 0;
}
