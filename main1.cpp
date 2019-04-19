//Header files and data items
#include<iostream.h>
#include<stdlib.h>
#include<process.h>
#include<conio.h>
int push(int[],int&,int);
int pop(int[],int&);
void display(int[],int);
const int size=50;

//modifying and adding main()body
//Intial main body
void main()
{
 clrscr();
 int stack[size],item,top=-1,res,ch;


 cout<<"\n\n\t\  MENU FOR OPERATIONS ON A ARRAY STACK ";

