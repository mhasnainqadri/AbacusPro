// Runtime Calculator (Abacus Pro)

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
main()
{
    int n1,n2; // Two numbers for calculation .
    char operation,choice,checker; // operation for +,-,*,/ ... choice for new re-run/exit ... checker for condition after loop 2 .
    cout<<"Welcome to Abacus Pro !\nLets begin calculating shall we ...";
    getch();
    system("cls");
    while(1)
    {
    cout<<"Enter 1st Number : ";
    cin>>n1;
    cout<<"Enter Operation (+,-,*,/) : ";
    operation=getche();
    cout<<"\n";
    cout<<"Enter 2nd Number : ";
    cin>>n2;
    system("cls");
    switch(operation)
    {
        case '+':
            cout<<n1<<" + "<<n2<<" = "<<n1+n2<<"\n";
            system("pause");
            system("cls");
            break;
        case '-':
            cout<<n1<<" - "<<n2<<" = "<<n1-n2<<"\n";
            system("pause");
            system("cls");
            break;
        case '*':
            cout<<n1<<" x "<<n2<<" = "<<n1*n2<<"\n";
            system("pause");
            system("cls");
            break;
        case '/':
            cout<<n1<<" / "<<n2<<" = "<<(float)n1/n2<<"\n";
            system("pause");
            system("cls");
            break;
        default:
            cout<<"Syntax Error !\n";
            system("pause");
            system("cls");
    }
    while(1)
    {
    cout<<"Do you want to perform a new calculation (y/n) : ";
    choice=getch();
    if(choice=='y'||choice=='Y')
    {   
        system("cls");
        break;
    }
    else if(choice=='n'||choice=='N')
    {
        checker='E';
        system("cls");
        cout<<"Thanks for using Abacus Pro !\nSee you again soon ... Good Bye !";
        getch();
        system("cls");
        break;
    }    
    else
    {
        system("cls");
        cout<<"Invalid input plz enter y/Y for yes and n/N for no ... \nPress any key to try again .";
        getch();
    }
    system("cls");
    }
    if(checker=='E')
        break;
    }
}