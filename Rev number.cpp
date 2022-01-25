/* NAME:AHER SAURABH SANTOSH   CREATED ON:22 JANAUARY 2021;9:53AM
   QUESTION:REVERSE A GIVEN NUMBER
   INPUT   :12345
   OUTPUT  :54321
   LOOP    :05
*/

#include<stdio.h>
int main()
    {
    	int loop      = 0;
    	int num       = 0;
		int sum       = 0;
		int reverse   = 0;
		int remainder = 0;
		int temp      = 0;
		int num2      = 0;
		int remainder1 = 0;
		int reverse1   = 0;
	
    	printf("\aENTER NUMBER  = ");
    	scanf("%d",&num);
    	temp = num;
		
		while(num!=0)
		{
		 loop++;
		 remainder = num %10;
		 reverse = reverse * 10 +remainder;
		 num = num/10;
		}
		printf("\aORIGINAL      = %d\n",temp);
		printf("\aREVERSE       = %d\n",reverse);
		printf("\aLOOP          = %d",loop);
	
  
     num2=reverse;
 //    printf("\n THE REV NUM FOR OPERATION = %d",num2);
     
     while(num2!=0)
     {
     	remainder1 = num2 % 10;
     	reverse1  = reverse1 *10 +remainder1;
     	num2 = num2 /10;
	 }
	 //printf("\nMODIFY REVERSE         = %d\n",reverse1);
	 
	 if(reverse1 == temp)
	 {
	 	printf("\nORIGINAL ==  REVERSE");
	 	
	 }
	 else
	 {
	 	printf("NOT EQUAL\n");
	 	
	 }
     	return 0;
	}
