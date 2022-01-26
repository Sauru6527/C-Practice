/* QUESTION : CHECK WHETER TRIANGLE IS VALID OR NOT,WHEN THREE ANGLES OF TRIANGLE ARE ENTERED THROUGH THE KEYBOARD
A TRAIANGLE IS VALID IF THE SUM IS 180 DEGREE

NAME : AHER SAURABH SANTOSH  CREATED ON:26 JAN WEDNESDAY TIME:9:53AM
*/
/**/
#include<stdio.h>  
	int main()
  {
	
	int side1;
	int side2;
	int side3;
	int sum;
	
	printf("\nENTER  SIDE 1 =  ");
	    scanf("%d",&side1);

	printf("\nENTER  SIDE 2 =  ");
	    scanf("%d",&side2);

	printf("\nENTER  SIDE 3 =  ");
	    scanf("%d",&side3);

    sum = side1+side2+side3 ;

    if(side1+side2+side3 == 180)
    {
    	printf("\a5HEY!!! ITS A RIGHT ANGLED TRIANGLE");
	}
	
	else
	{
		printf("NOT A RIGHT ANGLE TRIANGLE");
				printf("\n\aSUM =  %d",sum);	

	}
	
	
	return 0;
}
