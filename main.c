#include <stdio.h>
int main()
{
    int i, flag = 0, ps1, ps2, ps3, ps4, ps5, ps6;
    char us1, us2, us3, us4, us5, p1, p2, p3, p4, p5, p6, check1, check2, lus1, lus2, lus3, lus4, lus5, lp1, lp2, lp3, lp4, lp5, lp6;

    for (i = 1; i == 1; i++)
    {

        printf("Do You want to create an Account [y/n] ");
        scanf(" %c", &check1);
        if (check1 != 'y')
            goto end;

        printf("You have to input user-name with 5 letters.\nEnter first alphabet: ");
        scanf(" %c", &us1);

        printf("Enter second alphabet: ");
        scanf(" %c", &us2);

        printf("Enter third alphabet: ");
        scanf(" %c", &us3);

        printf("Enter fourth alphabet: ");
        scanf(" %c", &us4);

        printf("Enter fifth alphabet: ");
        scanf(" %c", &us5);

        do
        {

            flag = 0;
            printf("\nYou have to enter a 6 character password with at least 1 numeric, 1 capital and 1 small letter: ");

            printf("\nEnter first character: ");
            scanf(" %c", &p1);
            ps1 = p1;

            printf("Enter second character: ");
            scanf(" %c", &p2);
            ps2 = p2;

            printf("Enter third character: ");
            scanf(" %c", &p3);
            ps3 = p3;

            printf("Enter fourth character: ");
            scanf(" %c", &p4);
            ps4 = p4;

            printf("Enter fifth character: ");
            scanf(" %c", &p5);
            ps5 = p5;

            printf("Enter sixth character: ");
            scanf(" %c", &p6);
            ps6 = p6;

            if ((((((ps1 > 47 && ps1 < 58) || (ps2 > 47 && ps2 < 58)) || (ps3 > 47 && ps3 < 58)) || (ps4 > 47 && ps4 < 58)) || (ps5 > 47 && ps5 < 58)) || (ps6 > 47 && ps6 < 58))
                flag++;
            if ((((((ps1 > 64 && ps1 < 91) || (ps2 > 64 && ps2 < 91)) || (ps3 > 64 && ps3 < 91)) || (ps4 > 64 && ps4 < 91)) || (ps5 > 64 && ps5 < 91)) || (ps6 > 64 && ps6 < 91))
                flag++;
            if ((((((ps1 > 96 && ps1 < 123) || (ps2 > 96 && ps2 < 123)) || (ps3 > 96 && ps3 < 123)) || (ps4 > 96 && ps4 < 123)) || (ps5 > 96 && ps5 < 123)) || (ps6 > 96 && ps6 < 123))
                flag++;

            if (flag == 3)
            {
                break;
            }
            else
                printf("\nThe password does not meet requirements.\nThe procedure for entering password will be repeated\n");
            continue;
        } while (i == 1);

        printf("\nAccount Created Successfully");
    }

    for (i = 1; i == 1; i++)
    {

        printf("\nDo You want to login to your Account [y/n] ");
        scanf(" %c", &check2);
        if (check2 == 'n')
            break;

        do
        {
            printf("Enter your 5 letter user-name.\nEnter first alphabet: ");
            scanf(" %c", &lus1);

            printf("Enter second alphabet: ");
            scanf(" %c", &lus2);

            printf("Enter third alphabet: ");
            scanf(" %c", &lus3);

            printf("Enter fourth alphabet: ");
            scanf(" %c", &lus4);

            printf("Enter fifth alphabet: ");
            scanf(" %c", &lus5);

            if (((((us1 == lus1) && us2 == lus2) && us3 == lus3) && us4 == lus4) && us5 == lus5)
                break;
            else
            {
                printf("\nWrong Username entered. Please Retry");
                continue;
            }
        } while (i == 1);

        do
        {

            flag = 0;
            printf("\nYou have to enter a 6 character password with at least 1 numeric, 1 capital and 1 small letter: ");

            printf("\nEnter first character: ");
            scanf(" %c", &lp1);
            ps1 = p1;

            printf("Enter second character: ");
            scanf(" %c", &lp2);
            ps2 = p2;

            printf("Enter third character: ");
            scanf(" %c", &lp3);
            ps3 = p3;

            printf("Enter fourth character: ");
            scanf(" %c", &lp4);
            ps4 = p4;

            printf("Enter fifth character: ");
            scanf(" %c", &lp5);
            ps5 = p5;

            printf("Enter sixth character: ");
            scanf(" %c", &lp6);
            ps6 = p6;

            if (((((lp1 == p1 && lp2 == p2) && (lp3 == p3)) && (lp4 == p4)) && (lp5 == p5)) && (lp6 == p6))
                break;

            if (flag != 1)
                printf("\nThe password is Incorrect.\nThe procedure for entering password will be repeated\n");
        } while (flag == 0);

        printf("\nSuccessfully Logged, Welcome %c%c%c%c%c", us1, us2, us3, us4, us5);
    end:
        break;
    }
}
