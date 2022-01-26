#include<stdio.h>
int main()
{
	int det  = 0;
	int det1 = 0;

	int character;
	int character1;

	printf("ENTER CHARACTER WE WILL TELL ITS SMALL OR CAPITAL  =  ");
	scanf("%c",&character);
	
	printf("%d",character);
	
	det = character;
	
	if(character == 65 && 90)
	{
		printf("\nCHARACTER IS CAPITAL\n");
		
	}
	
	else if(character == 97 && 122)
	{
		printf("\nCHARACTER IS SMALL CASE\n");
	}
	
	
	printf("ENTER ANYYHING = ");
	scanf("%d",&character1);
	
	det1 =  character1;
	
	if(det1 == 0 && 9)
	{
		printf("\n DIGITS 0 to 9");
	}
	
	else if(det1 == 0 && 47 || det1== 58 && 64 || det == 91 && 96 || det == 123 && 127)
	{
		printf("\n  SPECIAL SYMBOL ");
	}
	
	else
	{
		printf("NOT DYMBOL");
	}
	return 0;
}
