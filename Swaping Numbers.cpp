/* NAME:AHER SAURABH SANTOSH   CREATED ON:22 JANAUARY 2021;4:09 AM
   QUESTION: /*TWO NUMBERS ARE INPUT THROUGH THE KEYWORD, INTO TWO LOCATION C AND D.WRITE A PROGRAM TO INTERCHANGE THE CONTENT OF C AND D*/
  /* INPUT   : A = 10 B = 20
   OUTPUT  : A = 20 B = 10*/
   
#include<stdio.h>
int main()
{
	int a;
	int b;
	int x;
	int y;
	int temp;
	
	printf("\nENTER A = ");
	scanf("%d",&a);
	
	printf("ENTER B = ");
	scanf("%d",&b);
	
	x=a;
	y=b;
	temp = a;
	a = b;
	b = temp;
	
	printf("BEFORE  A = %d\t BEFORE  B = %d\n",x,y);
	printf("AFTER   A = %d\t  AFTER  B = %d",a,b);




	
	return 0;
}
   
