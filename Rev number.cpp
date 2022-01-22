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
		return 0;
	}
  
