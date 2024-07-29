#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include<string.h>
#include<math.h>
struct User
{
    char name[20];
     char mobile[12];
    char mail_id[25];
    char city[15];
    char address[50];
    int bill;
};
void intromenu();
void Ordering();
void jump(int ,int );
void add_user();
int menu();
void box()
{
int i;
for ( i=2 ; i<=30 ; i++ ) // for y left
{
jump(4,i);
printf("*");
}
for ( i=4 ; i<=70 ; i++ ) // for x up
{
jump(i,2);
printf("*");
}
for ( i=4 ; i<=70 ; i++ ) // for x down
    {
jump(i,30);
printf("*");
}
for ( i=2 ; i<=30 ; i++ ) // for y right
{
jump(70,i);
printf("*");
}
}
void jump(int x,int y)
{
        COORD c;
        c.X=x;
        c.Y=y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
void Ordering()
{
FILE *fu;
    int test=0,option;
char stname[20];
    struct User usr;
    fflush(stdin);
    system("cls");
    box();
    jump(10,6);
    fflush(stdin);
    printf("Enter your name : ");
    gets(stname);
   
    fu = fopen("recordu.txt","ab+");
    if(fu == NULL){
        jump(10,5);
        printf("Error in opening file");
        exit(1);
    }
while(fread(&usr,sizeof(usr),1,fu ) == 1){
        if(strcmp(stname,usr.name) == 0){
        test= 1;
            jump(10,8);
            printf("Name : %s",usr.name);
            jump(10,9);
            printf("Mobile Number : %s",usr.mobile);
            jump(10,10);
            printf("Email Id : %s",usr.mail_id);
            jump(10,11);
            printf("Address : %d",usr.address);
            jump(10,12);
            printf("City : %s",usr.city);
            fflush(stdin);
            getche();
       
        }
    }
    if(test==0)
    {
    jump(12,15);
    printf("Your not registered!");
    getch();
    jump(10,16);
    printf("Kindly First Regiter Yourself");
    jump(10,17);
    printf("Press 1 to register, 2 to go back & 3 go to menu!");
    scanf("%d",&option);
    switch(option)
{
    case 1:
    add_user();
    break;
    case 2:
    Ordering();
    break;
    case 3:
    intromenu();
    break;
    default:
    printf("Invalid Input!");
    intromenu();
    break;
}
}
    fclose(fu);
    int p;
    while (1)
    {
         p = menu();
         switch (p)
         {
         case 1:
            usr.bill =676+usr.bill;
            break;
         case 2:
            usr.bill =700+usr.bill;
            break;
         case 3:
           usr.bill =685+usr.bill;
            break;
         case 4:
            usr.bill =400+usr.bill;
            break;
         case 5:
            usr.bill =415+usr.bill;
            break;
         case 6:
            usr.bill =585+usr.bill;
            break;
         case 7:
           usr.bill =595+usr.bill;
            break;
         case 8:
           usr.bill =895+usr.bill;
            break;
         case 9:
           usr.bill =625+usr.bill;
            break;
         case 10:
           usr.bill =595+usr.bill;
            break;
         case 11:
           usr.bill =650+usr.bill;
            break;
         case 12:
           usr.bill =800+usr.bill;
            break;
         case 13:
            usr.bill =590+usr.bill;
            break;
         case 14:
           usr.bill =915+usr.bill;
            break;
         case 15:
           usr.bill =915+usr.bill;
            break;
         case 16:
           usr.bill =875+usr.bill;
            break;
         case 17:
            usr.bill =895+usr.bill;
            break;
         case 18:
           usr.bill =850+usr.bill;
            break;
         case 19:
            usr.bill =215+usr.bill;
            break;
         case 20:
            usr.bill =190+usr.bill;
            break;
         case 21:
            usr.bill =390+usr.bill;
            break;
         case 22:
            usr.bill =490+usr.bill;
            break;
         case 23:
            usr.bill =385+usr.bill;
            break;
         case 24:
            usr.bill =95+usr.bill;
            break;
         case 25:
            usr.bill =65+usr.bill;
            break;
         case 26:
            usr.bill =65+usr.bill;
            break;
         case 27:
            printf("Your Bill amount is : %d" , usr.bill);
            getche();
            fflush(stdin);
            intromenu();
            break;
         default:
            break;
         }
    }
   
    getche();
    system("cls");
}
void intromenu()
{
    int choice;
    system("cls");
    box();
    jump(10,3);
    printf("\t\t   <---:MENU:--->");
    printf("\n\t\t         ----------------");
    jump(10,6);
    printf("Enter appropriate number to perform following task.");
    jump(10,8);
    printf("1 : To Sign Up");
    jump(10,10);
    printf("2 : Order Food");
    jump(10,12);
    printf("3 : Exit");
    jump(10,27);
    printf("Enter your Choice : ");
    jump(30,27);
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        add_user();
       
        break;
       
    case 2:
    Ordering();
    break;
case 3:
        exit(1);
        break;
   
default:
        jump(10,19);
        printf("Invalid Choice!");
        intromenu();
    }
}

int menu()
{
    int foodID;

    system("cls");
    printf("\n\t\t\t\tFOOD MENU\n\t\t\t\t\n");

    printf("\n\tStarters :\n");
    printf("\t1. Peri Bites ...................... 675/=\t  \n");
    printf("\t2. Loaded Nachos ..........................  700/=\n");
    printf("\t3. Ceasar Salad ...........................  685/=\t \n");
    printf("\t4. French Fries ............  400/=\t \n");
    printf("\t5. Corn Soup............................  415/=\t \n");
    printf("\t6. Chicken Strips............. 585/=\t \n");
    printf("\t7. Buffalop Wings............595/=\t \n");

    printf("\n\t Main Courses :\n");
    printf("\t8. Fettucine Pasta ........................  895/=\t  \n");
    printf("\t9. Steak and Cheese Sandwhich........................... 625/=\t \n");
    printf("\t10. Crispy Chicken Burger ........................ 595/=\n");
    printf("\t11. Beef Mushroom Burger ........................ 650/=\n");
    printf("\t12. Chicken Lasagne ...................... 800/=\t  \n");
    printf("\t13. Fish and Chips..........................  590/=\n");
    printf("\t14. Chicken Tarragon ...........................  915/=\t \n");
    printf("\t15. Moroccon Chicken..........  915/=\t \n");
    printf("\t16. Margherita Pizza..........................  875/=\n");
    printf("\t17. Buffalo Ranch Pizza ...........................  895/=\t \n");
    printf("\t18. Pepperoni Melt Pizza..........  850/=\t \n");

    printf("\n\t Desserts:\n");
    printf("\t19. Ice Cream (per scoop)........................  215/=\t  \n");
    printf("\t20. Donut........................... 190/=\t \n");
    printf("\t21. Cake Slice ........................  390/=\t  \n");

    printf("\n\t Drinks:\n");
    printf("\t22. Shake ........................... 490/=\t \n");
    printf("\t23. Coffee........................  385/=\t  \n");
    printf("\t24.  Water........................... 95/=\t \n");
    printf("\t25.  Coca-Cola ........................ 65/=\n");
    printf("\t26. Sprite   ........................ 65/=\n");

    printf("\t27. To Print the bill............................\n");
    printf("\n\nEnter your choice: ");

    scanf("%d", &foodID);
    return foodID;
}
void add_user()
{
    FILE *fu;
    struct User usr;
    char another ='Y';
    system("cls");
    jump(10,5);
   
    fflush(stdin);
   
    system("cls");

    fu = fopen("recordu.txt","ab+");
    if(fu == NULL)
{
        jump(10,5);
        printf("Error in opening file");
        exit(1);
    }
    fflush(stdin);
    fflush(stdin);
    int i=0;
        system("cls");
    box();
        jump(10,3);
        printf("<---:ADD USER RECORD:--->");
        jump(10,5);
        printf("Enter Your details.");
        jump(10,7);
        printf("Enter Name : ");
        gets(usr.name);
        fflush(stdin);
        jump(10,8);
        printf("Enter Mobile Number : ");
        gets(usr.mobile);
        for(i=0;usr.mobile[i]!='\0';i++)
        {
        if(isdigit(usr.mobile[i])==0)
        {
        printf("Invalid Input!");
        getche();
        add_user();
}
}

fflush(stdin);
        jump(10,9);
        printf("Enter Your Email ID : ");
        gets(usr.mail_id);
        fflush(stdin);
        jump(10,12);
        fflush(stdin);
        printf("Enter your City : ");
        gets(usr.city);
        fflush(stdin);
        jump(10,15);
        fflush(stdin);
        printf("Enter your Address : ");
        gets(usr.address);
        fflush(stdin);
        usr.bill =0;
        fwrite(&usr,sizeof(usr),1,fu);
        jump(10,18);
        printf("Want to add another record? Then press 'Y' else 'N'");
        fflush(stdin);

        another = getch();
        system("cls");
        fflush(stdin);
   
 
 
    fclose(fu);
    jump(10,20);
    printf("Press any key to continue...");
    getch();
    intromenu();
}
int main()
{
    intromenu();
   
}

