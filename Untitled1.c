#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>


void menu();
void gudBye();
void ticketBooking();
void accounts();
void aboutUs();
void psngrId();
void destination_int_dom();
void ChooseDestination_int();
void ChooseDestination_dom();
void ChooseTime();
void ChooseSeat();
void chooseTicket();
void accounts();
void accounts_core();
void ticket_expense();
void ticket_print();
void account_profit();
//void gift(char [], int);


int Destination_int,Destination_dom,Time,Seat,TicketClass;
char str_name[50],str_num[50],id[10];

//Main Function!
void main()
{
    menu();

    return ;
}

//main menu
void menu()
{

    system("cls");
    int num;
    char a;

    printf("\a");

    //logo!
    printf(" \n\t\t\t\t                        ");
    printf(" \n\t\t\t\t                         ");
    printf(" \n\t\t\t\t                         ");
    printf(" \n\t\t\t\t                         ");
    printf(" \n\t\t\t\t   Bangladesh       ");
    printf(" \n\t\t\t\t    Aviation        ");
    printf(" \n\t\t\t\t      Ltd.            ");
    printf(" \n\t\t\t\t                           ");




    printf(" \n\t\t                                                      ");
    printf(" \n\t\t|                                                  |\n");
    printf(" \n\t\t|          [A] Book Ticket                         |\n");
    printf(" \n\t\t|          [B] Accounts                            |\n");
    printf(" \n\t\t|          [C] Inventory                          |\n");
    printf(" \n\t\t|          [D] About Us                            |\n");
    printf(" \n\t\t|          [E] EXIT TO THE WINDOWS                 |\n");
    printf(" \n\t\t|                                                  |\n");
    printf(" \t\t                                                     \n ");

    printf(" \n\t\t\t   *Enter your choice: ");
    //scanf ("%c",&a);

    switch(getch())
    {
    case 'a' :
    case 'A' :
        ticketBooking();
        break;

    case 'b' :
    case 'B' :
        accounts();
        break;
    case 'c':
    case 'C':
        inventory();
        break;

    case 'd' :
    case 'D' :
        aboutUs();
        break;

    case 'e' :
    case 'E' :
        gudBye();
        break;

    default:
    {
        printf(" \n\t\tYOU ENTERED WRONG CHOICE..");
        printf(" \n\t\tPRESS ANY KEY TO TRY AGAIN");
        getch();


        system("cls");
        menu();
    }

    }
}

//Exit Function
void gudBye()
{

    system("cls");

    printf("\a");
    printf("\n\t\t\t*************************************\n ");
    printf("\n\t\t\t Thank you for using the system \n");
    printf("\n\t\t\t   Have a good day :D");
    printf("\n\t\t\t*************************************\n ");
}

void aboutUs()
{

    system("cls");

    printf("\a");
//Information about Bangladesh Aviation Ltd.
    printf(" \n\t *********************************************************************\n ");
    printf(" \n\t Bangladesh Aviation Ltd., Bangladesh's aviation leader, offers \n");
    printf(" \n\t a wide range of aviation services including executive aircraft charter, \n\n");
    printf(" \n\t aircraft management, FBO services, Jet-A fuel sales and hangar storage. \n");
    printf(" \n\t We are an FAA Certificated Air Carrier with worldwide operating \n");
    printf(" \n\t authority. In addition, Bangladesh Aviation is an Oklahoma \n");
    printf(" \n\t Licensed Aircraft Dealer. Your safety is our primary directive \n");
    printf(" \n\t and is an integral part of our company culture from the top down. \n");
    printf(" \n\t We operate under an internationally recognized Safety Management \n");
    printf(" \n\t System with clear written standards, training and implementation \n");
    printf(" \n\t which covers all aspects of our company from administration, \n");
    printf(" \n\t operations, services and maintenance. \n");
    printf(" \n\n\t Feel free to contact us at the following numbers \n");
    printf(" \n\t Contact NO. +8801788387246, +8801788000000, \n");
    printf(" \n\t Transportation Association (NATA). \n");
    printf(" \n\t *********************************************************************\n ");

    printf("\n\t *Press [M] to return to Main menu\n");
    printf("\n\t *Press [E] to Quit\n");

    switch(getch())
    {
    case 'm':
    case 'M':
    {
        menu();
        break;
    }

    case 'e':
    case 'E':
        gudBye();
        break;

    default:
    {
        puts(" \n\t Wrong Selection.Press any key to start over");
        fflush(stdin);
        getch();
        aboutUs();
    }
    }

}

void ticketBooking()
{
    psngrId();
    destination_int_dom();
    chooseTicket();
    ChooseTime();
    ChooseSeat();
    ticket_print();
}

void ticket_print()
{

    FILE *ticket_layoutin;
    FILE *accounts_tic;

//a text file is opened to keep records of the price of sold tickets

    accounts_tic=fopen("accounts_tic.txt","r");
    if (accounts_tic == NULL)
    {
        printf("File does not exists \n");
    }

    ticket_layoutin=fopen("ticket_layoutin.txt","a");
    if (ticket_layoutin == NULL)
    {
        printf("File does not exists \n");
    }

    system("cls");

    printf("\a");
    printf("\n---Please proceed to confirm---\n");

    printf("\n Passenger ID: %s",id);
    fprintf(ticket_layoutin,"\nPassenger ID: %s",id);

    switch(Destination_int)
    {
    case 1:
    {
        printf("\nDestination: Bangladesh --> Singapore\n\n");
        fprintf(ticket_layoutin,"\nDestination: Bangladesh --> Singapore");
        break;
    }
    case 2:
    {
        printf("\nDestination: Bangladesh --> Kuala Lumpur\n\n");
        fprintf(ticket_layoutin,"\nDestination: Bangladesh --> Kuala Lumpur");
        break;
    }
    case 3:
    {
        printf("\nDestination: Bangladesh --> Saudia Arab\n\n");
        fprintf(ticket_layoutin,"\nDestination: Bangladesh --> Saudia Arab");
        break;
    }
    case 4:
    {
        printf("\nDestination: Bangladesh --> Mumbai\n\n");
        fprintf(ticket_layoutin,"\nDestination: Bangladesh --> Mumbia");
        break;
    }
    case 5:
    {
        printf("\nDestination: Bangladesh --> Islamabad\n\n");
        fprintf(ticket_layoutin,"\nDestination: Bangladesh --> Islamabad");
        break;
    }
    case 6:
    {
        printf("\nDestination: Bangladesh --> Paris\n\n");
        fprintf(ticket_layoutin,"\nDestination: Bangladesh --> Paris");
        break;
    }
    case 7:
    {
        printf("\nDestination: Bangladesh --> Tokyo\n\n");
        fprintf(ticket_layoutin,"\nDestination: Bangladesh --> Tokyo");
        break;
    }


    }
//printing for domestic line
    switch(Destination_dom)
    {
    case 1:
    {
        printf("\nDestination: Dhaka --> Rajshahi \n\n");
        fprintf(ticket_layoutin,"\nDestination: Dhaka --> Rajshahi");
        break;
    }
    case 2:
    {
        printf("\nDestination: Dhaka --> Jessore \n\n");
        fprintf(ticket_layoutin,"\nDestination: Dhaka --> Jessore");
        break;
    }
    case 3:
    {
        printf("\nDestination: Dhaka --> Sylhet \n\n");
        fprintf(ticket_layoutin,"\nDestination: Dhaka --> Sylhet");
        break;
    }
    case 4:
    {
        printf("\nDestination: Dhaka --> Syedpur \n\n");
        fprintf(ticket_layoutin,"\nDestination: Dhaka --> Syedpu");
        break;
    }
    case 5:
    {
        printf("\nDestination: Rajshahi --> Dhaka \n\n");
        fprintf(ticket_layoutin,"\nDestination: Rajshahi --> Dhaka");
        break;
    }
    case 6:
    {
        printf("\nDestination: Jessore --> Dhaka \n\n");
        fprintf(ticket_layoutin,"\nDestination: Jessore --> Dhaka");
        break;
    }
    case 7:
    {
        printf("\nDestination: Sylhet --> Dhaka \n\n");
        fprintf(ticket_layoutin,"\nDestination: Sylhet --> Dhaka");
        break;
    }

    }

//selection for ticket class
    switch (TicketClass)
    {
    case 1:
    {
        printf("\nBusiness Class");
        fprintf(ticket_layoutin,"\nBusiness Class");
        break;
    }
    case 2:
    {
        printf("\nEconomy Class");
        fprintf(ticket_layoutin,"\nEconomy Class");
        break;
    }
    }


//switch for departure time
    switch(Time)
    {
    case 1:
    {
        printf("\nDeparture Time: 9.00 a.m\n");
        fprintf(ticket_layoutin,"\nDeparture Time: 9.00 a.m\n");
        break;
    }

    case 2:
    {
        printf("\nDeparture Time: 11.00 a.m\n");
        fprintf(ticket_layoutin,"\nDeparture Time: 11.00 a.m\n");
        break;
    }

    case 3:
    {
        printf("\nDeparture Time: 1.00 p.m\n");
        fprintf(ticket_layoutin,"\nDeparture Time: 1.00 p.m\n");
        break;
    }

    case 4:
    {
        printf("\nDeparture Time: 3.00 p.m\n");
        fprintf(ticket_layoutin,"\nDeparture Time: 3.00 p.m\n");
        break;
    }

    case 5:
    {
        printf("\nDeparture Time: 5.00 p.m\n");
        fprintf(ticket_layoutin,"\nDeparture Time: 5.00 p.m.\n");
        break;
    }
    }

//printing seat no.
    printf("\nSeat no.: %d\n",Seat);
    fprintf(ticket_layoutin,"\nSeat no.: %d",Seat);

    printf("\nPassenger Name: %s",str_name);
    fprintf(ticket_layoutin,"\nPassenger Name: %s",str_name);

    char str_cpy[50];

    strcpy(str_cpy,str_num);
    printf("\nPassenger contact no.: %s",str_cpy);


    switch(TicketClass)
    {

    case 1:
    {

        switch (Destination_int)
        {

        case 1:
        {
            puts("\nPrice of ticket: $100");
            break;
        }
        case 2:
        {
            puts("\nPrice of ticket: $120");
            break;
        }
        case 3:
        {
            puts("\nPrice of ticket: $150");
            break;
        }
        case 4:
        {
            puts("\nPrice of ticket: $100");
            break;
        }
        case 5:
        {
            puts("\nPrice of ticket: $130");
            break;
        }
        case 6:
        {
            puts("\nPrice of ticket: $200");
            break;
        }
        case 7:
        {
            puts("\nPrice of ticket: $200");
            break;
        }

        }
        break;
    }

    case 2:
    {
        switch (Destination_int)
        {
        case 1:
        {
            puts("\nPrice of ticket: $80");
            break;
        }
        case 2:
        {
            puts("\nPrice of ticket: $100");
            break;
        }
        case 3:
        {
            puts("\nPrice of ticket: $120");
            break;
        }
        case 4:
        {
            puts("\nPrice of ticket: $100");
            break;
        }
        case 5:
        {
            puts("\nPrice of ticket: $120");
            break;
        }
        case 6:
        {
            puts("\nPrice of ticket: $180");
            break;
        }
        case 7:
        {
            puts("\nPrice of ticket: $180");
            break;
        }

        }
        break;
    }

    }

    switch(TicketClass)
    {

    case 1:
    {

        switch (Destination_dom)
        {
        case 1:
        {
            puts("\nPrice of ticket: $50");
            break;
        }
        case 2:
        {
            puts("\nPrice of ticket: $80");
            break;
        }
        case 3:
        {
            puts("\nPrice of ticket: $50");
            break;
        }
        case 4:
        {
            puts("\nPrice of ticket: $40");
            break;
        }
        case 5:
        {
            puts("\nPrice of ticket: $50");
            break;
        }
        case 6:
        {
            puts("\nPrice of ticket: $40");
            break;
        }
        case 7:
        {
            puts("\nPrice of ticket: $70");
            break;
        }

        }
        break;
    }
    case 2:
    {
        switch (Destination_dom)
        {
        case 1:
        {
            puts("\nPrice of ticket: $40");
            break;
        }
        case 2:
        {
            puts("\nPrice of ticket: $60");
            break;
        }
        case 3:
        {
            puts("\nPrice of ticket: $35");
            break;
        }
        case 4:
        {
            puts("\nPrice of ticket: $35");
            break;
        }
        case 5:
        {
            puts("\nPrice of ticket: $45");
            break;
        }
        case 6:
        {
            puts("\nPrice of ticket: $35");
            break;
        }
        case 7:
        {
            puts("\nPrice of ticket: $50");
            break;
        }

        }
        break;
    }

    }

//confirmation of ticket price(to input in file system)
    int ticket_price=0;



    printf("\nEnter price of ticket to confirm: \n");
    scanf("%d",&ticket_price);
    fprintf(ticket_layoutin,"\nPrice of ticket: %d",ticket_price);



    int sum=0;

    fscanf(accounts_tic,"%d",&sum );
    printf("\nPrevious Total: %d\n",sum);
    sum = sum + ticket_price;

    fclose(accounts_tic);

    accounts_tic=fopen("accounts_tic.txt","w");
    if (accounts_tic == NULL)
    {
        printf("\nFile does not exists \n");
    }

    printf("\nNew total: %d\n",sum);
    fprintf(accounts_tic,"%d",sum);


    fclose(accounts_tic);
    fclose(ticket_layoutin);

//option for next process
    printf("\n\t =>Press M to return to Main menu\n");
    printf("\n\t =>Press Q or any key to quit to system\n");
    switch (getch())
    {

    case 'm':
    case 'M':
        menu();
        break;

    case 'q':
    case 'Q':
        gudBye();
        break;

    default:
        gudBye();
        break;

    }

}


void psngrId()
{

    system("cls");

    printf("\a");
    printf("\nEnter a passenger ID: \n");
    fflush(stdin);
    gets(id);

    printf("\nEnter passenger name: \n");
    fflush(stdin);
    gets(str_name);

    printf("\nEnter passenger contact no.: \n");
    fflush(stdin);
    gets(str_num);


}

void destination_int_dom()
{
    system("cls");

    printf("\a");
    printf("\nPlease choose your option: \n\n");

    printf("I >> International \n\n");

    printf("D >> Domestic\n\n");

    printf("Please enter your selection --> ");

    switch (getch())
    {

    case 'i':
    case 'I':
        ChooseDestination_int();
        break;

    case 'd':
    case 'D':
        ChooseDestination_dom();
        break;

    default:
    {
        destination_int_dom();
        printf("\nWrong Input!");
        printf("\nPlease Enter your choice again");
    }

    }
}

void chooseTicket()
{
    system("cls");

    printf("\a");
    printf("\nPlease choose your Ticket Class\n\n");
    printf("1 >> Business Class\n\n");
    printf("2 >> Economy Class\n\n");
    printf("Please enter your selection --> ");

    scanf("%d", &TicketClass);

}

void ChooseDestination_int()

{
    system("cls");

    printf("\a");
    printf("Please choose your destination\n\n");

    printf("1 >> Bangladesh --> Singapore\n\n");
    printf("2 >> Bangladesh --> Kuala Lumpur\n\n");
    printf("3 >> Bangladesh --> Saudia Arab\n\n");
    printf("4 >> Bangladesh --> Mumbai\n\n");
    printf("5 >> Bangladesh --> Islamabad\n\n");
    printf("6 >> Bangladesh --> Paris\n\n");
    printf("7 >> Bangladesh --> Tokyo\n\n");

    printf("Please enter your selection --> ");

    scanf("%d",&Destination_int);


}

void ChooseDestination_dom()

{
    system("cls");

    printf("\a");
    printf("Please choose destination\n\n");

    printf("1 >> Dhaka --> Rajshahi\n\n");
    printf("2 >> Dhaka --> Jessore\n\n");
    printf("3 >> Dhaka --> Sylhet\n\n");
    printf("4 >> Dhaka --> Syedpur\n\n");
    printf("5 >> Rajshahi --> Dhaka\n\n");
    printf("6 >> Jessore --> Dhaka\n\n");
    printf("7 >> Sylhet --> Dhaka\n\n");

    printf("Please enter your selection --> ");

    scanf("%d",&Destination_dom);


}

void ChooseTime()
{
    system("cls");

    printf("\a");
    printf("Please choose flight time\n\n");
    printf("1 >> 9  a.m.\n\n");
    printf("2 >> 11 a.m.\n\n");
    printf("3 >> 1  p.m.\n\n");
    printf("4 >> 3  p.m.\n\n");
    printf("5 >> 5  p.m.\n\n");
    printf("Please enter your selection --> ");

    scanf("%d",&Time);

}

void ChooseSeat()
{
    system("cls");

    printf("\a");
    int r,c;
    int seats[3][8]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};
    printf("\t\tSeating In All Flights\n\n");
    printf("\t1\t2\t3\t4\t5\t6\t7\t8\n");

    for (r=0; r<3; r++)
    {
        printf("\n%d", r+1);
        for (c=0; c<8; c++)
        {
            printf("\t%d", seats[r][c]);
        }
    }

    printf("\nPlease choose your seat --> ");
    scanf("%d",&Seat);

    if(Seat>24)
    {
        printf("\n\nWrong selection! Press any key to restart");
        getch();
        ChooseSeat();
    }

}

void accounts()
{

    system("cls");

    printf("\a");
    int pass;

    printf(" \n\t\t\t                                      \n ");
    printf(" \n\t\t\t                                       \n");
    printf(" \n\t\t\t           :-WELCOME TO:-              \n");
    printf(" \n\t\t\t        :-Accounts Section:-           \n");
    printf(" \n\t\t\t  :-The system is password protected:- \n");
    printf(" \n\t\t\t       Please enter the password       \n");
    printf(" \n\t\t\t                                       \n ");
    scanf("\n\t\t\t %d",&pass);

    if(pass==12345)
    {
        accounts_core();
    }
    else
    {
        printf("\nWrong Password!\n");
        printf("\nPlease try again.\n");
        accounts();
    }
}

//This section keep the records of all ticket & inventory transactions
void accounts_core()
{

    system("cls");

    printf("\a");
    printf("\n[I] Inventory\n");
    printf("\n[T] Tickets\n");
    printf("\n[P] Neat Profit\n");
    printf("\n[Q] Exit to Main menu\n");
    printf("SELECTION: ");

    switch(getch())
    {
    case 'i':
    case 'I':
        inventory_expense();
        break;

    case 't':
    case 'T':
        ticket_expense();
        break;

    case 'p':
    case 'P':
        account_profit();
        break;

    case 'q':
    case 'Q':
        menu();
        break;

    default:
    {
        printf("Wrong choice! Press any key to try again.");
        getch();
        accounts_core();
    }
    }
}

void inventory_expense()
{

    system("cls");

    printf("\a");
    FILE *inventory_ex; //pointer declaration for inventory expenses records
    inventory_ex=fopen("inventory_expenses.txt","r");

    if(inventory_ex==NULL)
    {
        printf("\nError! No files found\n");
    }

    int sum=0;
    fscanf(inventory_ex,"%d",&sum);  //scanning previous expenses from file
    printf("\n\n\n---The total expenses are: $%d---\n",sum);
    printf("\n*****************************************\n");

    fclose(inventory_ex);

    printf("\n\n==>Press [M] to return to Main menu\n");
    printf("\n\n==>Press [A] to return to accounts\n");
    printf("\n\n==>Press [Q] or any key to quit");

    switch(getch())
    {
    case 'm':
    case 'M':
        menu();
        break;

    case 'a':
    case 'A':
        accounts_core();
        break;

    case 'q':
    case 'Q':
        gudBye();
        break;

    }
}

void ticket_expense()
{

    system("cls");

    printf("\a");
    FILE *accounts_tic; //pointer declaration for sold ticket records

    accounts_tic=fopen("accounts_tic.txt","r");
    if (accounts_tic == NULL)
    {
        printf("\nFile does not exists \n");
    }

    int x;

    fscanf(accounts_tic,"%d",&x);
    printf("\n\nThe earnings from tickets are : %d\n",x);
    printf("\n****************************************");
    fclose(accounts_tic);

    printf("\n\n==>Press [M] to return to Main menu\n");
    printf("\n\n==>Press [A] to return to accounts\n");
    printf("\n\n==>Press [Q] or any key to quit");

    switch(getch())
    {
    case 'm':
    case 'M':
        menu();
        break;

    case 'a':
    case 'A':
        accounts_core();
        break;

    case 'q':
    case 'Q':
        gudBye();
        break;

    }
}


void account_profit()
{
    FILE *accounts_tic;
    FILE *inventory_ex;

    system("cls");

    printf("\a");
    accounts_tic=fopen("accounts_tic.txt", "r");
    if (accounts_tic == NULL)
    {
        printf("\nFile does not exists \n");
    }

    inventory_ex=fopen("inventory_expenses.txt", "r");
    if (inventory_ex == NULL)
    {
        printf("\nFile does not exists \n");
    }

    int a,b;

    fscanf(accounts_tic,"%d",&a);
    fscanf(inventory_ex,"%d",&b);

    printf("\n\nNeat Profit: %d\n",a-b);
    printf("\n************************************\n");
    fclose(accounts_tic);
    fclose(inventory_ex);

    printf("\n\n==>Press [M] to return to Main menu\n");
    printf("\n\n==>Press [A] to return to accounts\n");
    printf("\n\n==>Press [Q] or any key to quit");


    switch(getch())
    {
    case 'm':
    case 'M':
        menu();
        break;

    case 'a':
    case 'A':
        accounts_core();
        break;

    case 'q':
    case 'Q':
        gudBye();
        break;

    }
}

//inventory section
void inventory()
{

    system("cls");

    printf("\a");
    int pass;
    printf(" \n\t\t\t                                      \n ");
    printf(" \n\t\t\t|                                     |\n");
    printf(" \n\t\t\t|          :-WELCOME TO:-             |\n");
    printf(" \n\t\t\t|       :-Inventory Section:-         |\n");
    printf(" \n\t\t\t| :-The system is password protected:-|\n");
    printf(" \n\t\t\t|      Please enter the password      |\n");
    printf(" \n\t\t\t                                      \n ");
    scanf("\n\t\t\t %d",&pass);

    if(pass==12345)
    {
        enterMenu();
    }
    else
    {
        printf("\nWrong Password!\n");
        printf("\nPlease try again.\n");
        inventory();
    }
}

void enterMenu ()
{
    system("cls");

    printf("\a");
    printf("\n[B] Buy\n");
    printf("\n[Q] Exit to Main menu\n");
    printf("SELECTION: ");

    switch(getch())
    {
    case 'b':
    case 'B':
        inventory_core();
        break;

    case 'q':
    case 'Q':
        menu();
        break;



    default:
    {
        printf("Wrong choice! Press any key to try again.");
        getch();
        inventory();
    }
    }
}




void inventory_core()
{

    system("cls");

    printf("\a");
    FILE *inventory_info; //pointer declaration for inventory informations
    FILE *inventory_ex; //pointer declaration for inventory expenses

//file opening
    inventory_info=fopen("inventory_records.txt","w");

    if(inventory_info==NULL)
    {
        printf("Error! No files found");
    }

    inventory_ex=fopen("inventory_expenses.txt","r");

    if(inventory_ex==NULL)
    {
        printf("Error! No files found");
    }




//structure to record details of items
    struct inventory
    {
        char name[20];
        int price;
        int code;
        int qty;


    };

    struct inventory item[50];

    int n, i;

    printf("Enter number of items:");
    scanf("%d", &n);
    fflush(stdin);

    for (i = 0; i < n; i++)

    {

        printf("\nItem no. :%d",i+1);

        printf("\nItem name: \n");
        scanf("\n%s", item[i].name);
        fflush(stdin);

        printf("\nItem code: \n");
        scanf("\n%d", &item[i].code);
        fflush(stdin);

        printf("\nQuantity: \n");
        scanf("\n%d", &item[i].qty);
        fflush(stdin);

        printf("\nPrice: \n");
        scanf("\n%d",  &item[i].price);
        fflush(stdin);


    }

    printf("\n\n************************  INVENTORY *****************************  \n");

    printf("\n\n------------------------------------------------------------------\n");

    printf("\n\nS.N.|    NAME           |   CODE   |  QUANTITY |  PRICE\n");

    printf("\n\n------------------------------------------------------------------\n");

    //this section prints all the records taken in a .txt file

    fprintf(inventory_info,"\n\n************************  INVENTORY *****************************  \n");

    fprintf(inventory_info,"\n\n------------------------------------------------------------------\n");

    fprintf(inventory_info,"\n\n S.N.|    NAME           |   CODE   |  QUANTITY |  PRICE \n\n");

    fprintf(inventory_info,"\n\n------------------------------------------------------------------\n");

    for (i = 0; i < n; i++)
    {

        printf("\n\n %d     %s                  %d          %d        %d  \n\n", i + 1, item[i].name, item[i].code, item[i].qty,
               item[i].price);
    }
    printf("\n\n------------------------------------------------------------------\n");

    for (i = 0; i < n; i++)
    {

        fprintf(inventory_info,"\n\n %d           %s              %d           %d          %d    \n",
                i + 1, item[i].name, item[i].code, item[i].qty,item[i].price);

    }
    fprintf(inventory_info,"\n------------------------------------------------------------------\n");


    int sum=0;
    fscanf(inventory_ex,"%d",&sum);  //scanning previous expenses from file
    fflush(stdin);

    fclose(inventory_ex);

    for (i=0; i<n; i++)
    {

        sum = sum + item[i].price;
    }

    inventory_ex=fopen("inventory_expenses.txt","w");

    if(inventory_ex==NULL)
    {
        printf("Error! No files found");
    }

    printf("\n\n The total expenses are: %d\n",sum);
    printf("\n*********************************\n");

    fprintf(inventory_ex,"%d",sum);

    fclose(inventory_ex);
    fclose(inventory_info);

    printf("\n=>>Press M to return to Main menu\n");
    printf("\n=>>Press I to return to Inventory\n");
    printf("\n=>>Press Q to quit from the program\n");

    switch (getch())
    {

    case 'm':
    case 'M':

        menu();
        break;

    case 'q':
    case 'Q':
        gudBye();
        break;

    case 'i':
    case 'I':
        enterMenu();
        break;
    }

}

