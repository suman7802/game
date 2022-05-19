#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int a = 0;
    do
    {
        int n, x, y, z, input, chance = 0;
        srand(time(0));

        do
        {
            z = 0;
            printf("Welcome in number guessing game\n");
            printf("Easy level press: 1\nMedium level press: 2\nHard level press: 3\n");
            scanf("%d", &y);
            if (y == 1)
            {
                n = 5;
                z++;
            }
            else if (y == 2)
            {
                n = 10;
                z++;
            }
            else if (y == 3)
            {
                n = 15;
                z++;
            }
            else
            {
                printf("Invalid Input!\n");
            }
        } while (z == 0);

        x = (rand() % n) + 1;
        // printf("your number is %d \n", x); //The cheat is here
        do
        {
            printf("Please Enter the number between (1-%d): ", n);
            scanf("%d", &input);
            chance++;
            if (x == input && input <= n && input >= 0)
            {
                printf("You win\n");
                break;
            }
            else if (x > input && input <= n && input >= 0)
            {
                printf("Try bigger value\n");
            }
            else if (x < input && input <= n && input >= 0)
            {
                printf("Try smaller value\n");
            }
            else
            {
                printf("Error! Please Enter the number between (1-%d)\n", n);
                printf("You void the rule by not sellecting number between (1-%d)\tYour chance is reduced by 2!\n", n);
                chance += 2;
            }
        } while (chance < 5);
        printf("Game over! You used %d chance! your point is %d\n!", chance, (100 / chance));
        printf("True number was %d \n", x);
        a;
        printf("Press 1 for Continue..\nPress 0 for Exit..\n");
        scanf("%d", &a);

    } while (a == 1);

    return 0;
}