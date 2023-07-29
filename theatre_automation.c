/******************************************************************************
C Project (Theatre Automation)
Written by Peram Priyatham Reddy
priyathamreddy106@gmail.com
*******************************************************************************/
#include <stdio.h>
#include <conio.h>
// theatre automation
int option,diamond=80,silver=150,gold=150,seat,diamond_tickets,gold_tickets,silver_tickets,collection,amount;
int main()
{
    do
    {
        printf("\nWelcome to online ticket booking of Sha theatre \n");
        printf("1.)Bookings\n");
        printf("2.)Status\n");
        printf("3.)Report\n");
        printf("4.)Exit\n");
        printf("Choose an option (Enter the option number): \n");
        scanf("%d",&option);
        if(option==1)
        {
            void bookings();
            bookings();
        }
        else if(option==2)
        {
            void status();
            status();
        }
        else if(option==3)
        {
            void report();
            report();
        }
        else if(option==4)
        {
            printf("Press any key to exit\n");
            break;
        }
        else
        {
            printf("Please enter valid option\n");
        }
    }while(option!=4);
    return 0;
}
void bookings()
{
    printf("There are three types of seats in the theatre\n");
    printf("1.)Diamond\n");
    printf("2.)Gold\n");
    printf("3.)Silver\n");
    printf("Price of Diamond seats: 250/-\n");
    printf("Price of Gold seats: 150/-\n");
    printf("Price of Silver seats: 100/-\n");
    printf("Select the type of seat ( 1 for Diamond, 2 for Gold, 3 for Silver, 4 to return to main menu ): \n");
    scanf("%d",&seat);
    do
    {
        if(seat==1)
        {
            printf("Number of seats available in Diamond: %d\n",diamond);
            printf("Enter number of tickects: \n");
            scanf("%d",&diamond_tickets);
            if(diamond_tickets<=diamond)
            {
                printf("Total amount = %d\n",250*diamond_tickets);
                printf("\nEnter amount received: ");
                scanf("%d",&amount);
                printf("Change to be returned: %d\n",amount-(250*diamond_tickets));
                diamond-=diamond_tickets;
            }
            else
                printf("\nSorry! only %d diamonds are available ",diamond);
            return;
        }
        else if(seat==2)
        {
            printf("Number of seats available in Gold: %d\n",gold);
            printf("Enter number of tickects: \n");
            scanf("%d",&gold_tickets);
            if(gold_tickets<=gold)
            {
                printf("Total amount = %d\n",150*gold_tickets);
                printf("\nEnter amount received: ");
                scanf("%d",&amount);
                printf("Change to be returned: %d\n",amount-(150*gold_tickets));
                gold-=gold_tickets;
            }
            else
                printf("\nSorry! only %d golds are available ",gold);
            return;
        }
        else if(seat==3)
        {
            printf("Number of seats available in Silver: %d\n",silver);
            printf("Enter number of tickects: \n");
            scanf("%d",&silver_tickets);
            if(silver_tickets<=silver)
            {
                printf("Total amount = %d\n",100*silver_tickets);
                printf("\nEnter amount received: ");
                scanf("%d",&amount);
                printf("Change to be returned: %d\n",amount-(100*silver_tickets));
                silver-=silver_tickets;
            }
            else
                printf("\nSorry! only %d silvers are available ",silver);
            return;
        }
        else if(seat==4)
        {
            printf("Press any key to exit\n");
            return;
        }
        else 
        {
            printf("Please enter valid seat type\n");
        }
    }while(seat!=4);
}
void status()
{
    printf("Number of seats available in Diamond: %d\n",diamond);
    printf("Number of seats available in Gold: %d\n",gold);
    printf("Number of seats available in Silver: %d\n",silver);
}
void report()
{
    printf("Sha theatre bookings\n");
    printf("Number of Diamonds saled: %d\n",80-diamond);
    printf("Number of Golds saled: %d\n",150-gold);
    printf("Number of Silver saled: %d\n",150-silver);
    printf("Collection of Diamonds: %d\n",(80-diamond)*250);
    printf("Collection of Golds: %d\n",(150-gold)*150);
    printf("Collection of Silvers: %d\n",(150-silver)*100);
    printf("Total collection of the show: %d\n",(80-diamond)*250+(150-gold)*150+(150-silver)*100);
    collection=(80-diamond)*250+(150-gold)*150+(150-silver)*100;
    if(collection==57500)
        printf("HOUSEFULL\n");
    else
        printf("Tickets are available\n");
}


