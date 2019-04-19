



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

cout<<"\n\t________________________________________";
   cout<<"\n\n1. INSERT ";
   cout<<"\n2. DELETE ";
   cout<<"\n3. DISPLAY ";
   cout<<"\n4. EXIT ";
 do
  {
   cout<<"\n\nEnter your choice :: ";
   cin>>ch;
 if(ch==1)
 {
  cout<<"\n Enter Item For Insertion::";
  cin>>item;
  res=push(stack,top,item);
  if (res==-1)
   {
     cout<<"Overflow!! Stack full\n";
     exit(0);
   }
   cout<<"\n The Stack Now Is:: \n";
   display(stack,top);

  }
  if(ch==2)
  {
  cout<<"\n Now Deletion of Elements Will Start..\n";
   res=pop(stack,top);
   if(res==-1)
    {
     cout<<"Underflow Condition!! \n";
     exit(0);
    }
    else
    {
     cout<<"\n Element Deleted is::"<<res<<"\n";
     cout<<"\n The Stack Now is ::\n";
     display(stack,top);
    }

     }
  if(ch==3)
  {
  cout<<"\n The Stack Now is ::\n";
  display(stack,top);
  }
  cout<<"\n\nEnter '1' to perform more operations or '0' to exit ::";
    cin>>ch;
    if (ch==0)
      exit(0);
 } while (ch==1);
  getch();
 }
 //functions
 int push(int stack[],int &top,int ele)
 {
  if(top==size-1)
   cout<<"\nOverflow!!";
   else
   {
    top++;
    stack[top]=ele;
   }
 return 0;
 }
