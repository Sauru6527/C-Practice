#include<stdio.h>
int main()
{
	int hardness         = 0;
	float carbon           = 0;
	int tensile_strength = 0;
	
	printf("ENTER HARDNESS = ");
	scanf("%d",&hardness);
	
	printf("ENTER CARBON  = ");
	scanf("%f",&carbon);
	
	printf("ENTER TENSILE STRENGTH = ");
	scanf("%d",&tensile_strength);
	
	if(hardness>=50 && carbon<=0.7 && tensile_strength>=500)
	{
		printf("GRADE 10\n");
	}
	
	else if(hardness>50 && carbon<=0.7)
	{
		printf(" GRADE 9");
	}
	
	else if(carbon<=0.7 && tensile_strength>=500)
	{
		printf(" GRADE 8");
	}
	
    else if(hardness>=50 &&  tensile_strength>=500)
   	{
		printf(" GRADE 7");
	}
	
	else if(hardness>=50 || carbon<=0.7 || tensile_strength>=500)
	{
		printf(" GRADE 6");
	}
	
	else
	{
		
		printf("GRADE 5 \nNONE CONDTIONS ARE MEET");
	}
	return 0;
}

