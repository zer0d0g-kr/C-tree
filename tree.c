#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	srand((unsigned int)time(NULL));
	while(1){
		int height = 0, width = 0;
		for(height = 0;height <= 10;height++)
		{
			for(width=10;width>=height;width--)
			{
				if(!(rand()%10))
					printf("*");
				else
					printf(" ");
			}
			for(width=0;width<=height*2;width++)
			{
				printf("^");
			}
			for(width=0;width<=7;width++)
			{
				if(!(rand()%10))
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
		}
		for(height = 0;height<=3;height++)
		{
			for(width=0;width<=7;width++)
			{
				if(!(rand()%10))
					printf("*");
				else
					printf(" ");
			}
			for(width=0;width<=6;width++)
			{
				printf("|");
			}
			for(width=0;width<=7;width++)
			{
				if(!(rand()%10))
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
		}
		sleep(1);
	system("clear");
	}
}
