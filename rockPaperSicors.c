#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generatingRandomNum(int n)
{
     srand(time(NULL));
     return rand() % n;
}

int Compufunc(int a)
{
     if (a == 0)
     {
          printf("Computer : Rock\n");
     }

     if (a == 1)
     {
          printf("Computer : Paper\n");
     }

     if (a == 2)
     {
          printf("Computer : Secissor\n");
     }
}

int userfunc(int a)
{
     if (a == 0)
     {
          printf("You : Rock\n");
     }

     if (a == 1)
     {
          printf("You : Paper\n");
     }

     if (a == 2)
     {
          printf("You : Secissor\n");
     }
}
int um = 0, cm = 0;

void MarksDisplay(int u, int c)
{
     //  here a is user  and b is computer
     // 0 for Rock, 1 for Paper and 2 for Secissor
     if (u == 0 && c == 1)
     {
          // paper covers the rock hence paper wins
          cm++;
          printf("Player Socre: %d\n", um);
          printf("computer Socre: %d\n", cm);
     }
     else if (u == 0 && c == 2)
     {
          um++;
          printf("Player Socre: %d\n", um);
          printf("computer Socre: %d\n", cm);
     }
     else if (u == 1 && c == 0)
     {
          um++;
          printf("Player Socre: %d\n", um);
          printf("computer Socre: %d\n", cm);
     }
     else if (u == 1 && c == 2)
     {
          cm++;
          printf("Player Socre: %d\n", um);
          printf("computer Socre: %d\n", cm);
     }
     else if (u == 2 && c == 1)
     {
          um++;
          printf("Player Socre: %d\n", um);
          printf("computer Socre: %d\n", cm);
     }
     else if (u == 2 && c == 0)
     {
          cm++;
          printf("Player Socre: %d\n", um);
          printf("computer Socre: %d\n", cm);
     }
}

void winfunc(int u, int c)
{
     if (um > cm)
     {
          printf(" Congrulation You Win the game\n ");
     }
     else if (cm > um)
     {
          printf("Sorry!!,You Lost the game\n");
     }
     else
     {
          printf("Tie\n");
     }
}

int main()
{
     int uin, cf,uf;
     char *un;
     printf("\n");
     printf(" Welcome player let's start playing Rock ,Paper ,Secissor\n ");
     printf("Enter your name \n \n");
     un = (char *)malloc(12 * sizeof(char));
     scanf("%s", un);
     getchar();
     printf("\n %s \t Enter 0 for Rock, 1 for Paper and 2 for Secissor \n", un);
     for (int i = 0; i < 3; i++)
     {
          printf("It's your turn!!\n");
          scanf("%d", &uin);
          getchar();
            userfunc(uin);
          cf = generatingRandomNum(3);
          Compufunc(cf);
          MarksDisplay(uin,cf);
     }
     printf("\n\n");
     winfunc(userfunc(uin), cf);

     return 0;
}

