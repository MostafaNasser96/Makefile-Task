#include"code.h"

#define Length 50
 
void printMessage(void)
{
	char Array_Answer[Length];
	
	printf("Please Answer This Quiz : \n");
	
	printf("Who won the ballon d'or 2018 : ");
	scanf("%s",Array_Answer);
	
	if(Array_Answer[0] == 'm' && Array_Answer[1] =='e' && Array_Answer[2]=='s' && Array_Answer[3]=='s'&& Array_Answer[4]=='i')
	{
		printf("Answer is correct Thank You...");
	}
	else
	{
		printf("Answer is Wrong Sorry ...");
	}
}