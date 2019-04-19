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
