#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

#define ANSI_COLOR_GREEN    "\x1b[32m"
#define ANSI_COLOR_WOOD     "\x1b[43m"
#define ANSI_COLOR_RESET    "\x1b[0m"

int main()
{
        srand((unsigned int)time(NULL));

		setvbuf(stdout, NULL, _IONBF, 0);

        while(1){
                int height = 0, width = 0;

				printf("\033[H\033[J");

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
                                printf(ANSI_COLOR_GREEN "^" ANSI_COLOR_RESET);
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
                                printf(ANSI_COLOR_WOOD "|" ANSI_COLOR_RESET);
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
                printf("\n\nMarry Christmas!!\n--zer0d0g\n");

				fflush(stdout);
                sleep(1);
        }
}
