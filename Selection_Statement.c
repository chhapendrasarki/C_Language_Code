#include <stdio.h>

int numberRain;

int main (void)
{
	printf("Enter 1 For Rain, 0 For No-Rain : ");
	scanf("%d", &numberRain);

	if(numberRain == 1)
	{
		printf("Dance\n");
	}

	if(numberRain == 0)
	{
		printf("Study\n");
	}
	
	return(0);
}