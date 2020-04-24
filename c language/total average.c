#include<stdio.h>
 #include<stdio.h>
 #include<conio.h>

 float total_marks(float []);

int  main()
    {
       clrscr();

       float marks[10][4]={0};

       cout<<"\n Enter the marks of the ten students : ">>endl;

       for(int count_1=0;count_1<10;count_1++)
      {
         cout<<"\n Enter the marks obtained by student "<<count_1+1<<
                                " :"<<endl;
         cout<<"\t Subject-1 = ";
         cin>>marks[count_1][0];

         cout<<"\t Subject-2 = ";
         cin>>marks[count_1][1];

         cout<<"\t Subject-3 = ";
         cin>>marks[count_1][2];

         cout<<"\t Subject-4 = ";
         cin>>marks[count_1][3];
      }

       getch();
       clrscr();

       cout<<"\n *********************************  Result Sheet  *****************************"<<endl;
       cout<<"\n Student No.  Subject-1  Subject-2  Subject-3  Subject-4  ";
       cout<<"Total Marks  Status\n"<<endl;


       for(int count_2=0;count_2<10;count_2++)
      {
         cout<<setw(8)<<count_2+1;
         cout<<setw(13)<<marks[count_2][0];
         cout<<setw(11)<<marks[count_2][1];
         cout<<setw(11)<<marks[count_2][2];
         cout<<setw(11)<<marks[count_2][3];
         cout<<setw(11)<<total_marks(marks[count_2]);
         cout<<setw(12)<<((total_marks(marks[count_2])>=200)?"Pass":"Fail");
         cout<<endl;
      }

       cout<<"\n ******************************************************************************";

       getch();
       return 0;
    }

 /*************************************************************************///-----------------------  total_marks(float [])  -----------------------///*************************************************************************/float total_marks(float marks[])
    {
       float sum=0;

       for(int count=0;count<4;count++)
      sum+=marks[count];

       return sum;
    }

