#include <iostream>
#include <string>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main()
{
	
	for(int c=1;c>=0;c++)
	{
		
		int firstselecion;
	cout<<"\t\t\t\t\tInput only number proceed...\n1.CGPA\n\n2.TIME TABLE\n3.FEE STRUCTURE\n";
	cin>>firstselecion;
	
if(firstselecion==1)  //cgpa code started...
    	                    {
	int option;
	cout<<"\tWrite only option number to get cgpa\n\n1.Smester wise\n2.Whole degree cgpa\n ";  //selection
	cin>>option;
	if(option==1)
	            {
	             	float pf,eng,math,ict,cgpa;
                cout<<"\nEnter the number of subjects out of 100...\n\nEnter the number of PROGRAMMING FUNDAMENTALS\n";
            		cin>>pf;
                cout<<"Also of ENGLISH\n";
             		cin>>eng;
                cout<<"Also of MATHEMATICS\n";
		            cin>>math;
             	cout<<"Also of ICT\n";
	            	cin>>ict;
	            cout<<"Also of PHYSICS\n";
	            	cin>>eng;
               	cgpa=( pf+eng+math+ict+cgpa)/100;
	cout<<"Your cgpa of current smester is...:\n"<<cgpa<<endl;	
	cout<<"PRESS ANY KEY TO PROCEED\n";
 
	                       //cgpa smester wise
                }
	else if(option==2)
	{
			string name;
	cout<<"\nEnter Name...\n";
	cin>>name;
	       float a,b,c,d,e,f,g,h,total,cgpa;
	cout<<"Enter your cgpa of 1st smester out of 4 \n";
	cin>>a;
	cout<<"Also of 2nd smester \n";
	cin>>b;
	cout<<"Also of 3rd smester  \n";
	cin>>c;
	cout<<"Also of 4th smester \n";
	cin>>d;
	cout<<"Also of 5th smester \n";
	cin>>e;
	cout<<"Also of 6th smester \n";
	cin>>f;
	cout<<"Also of 7th smester \n";
	cin>>g;
	cout<<"Also of 8th smester \n";
	cin>>h;                             //input smester wise numbers...
	total=a+b+c+d+e+f+g+h;              //total
	cgpa= total/8 ;                     //gpa formula
{
	if(cgpa==4)                         //condition no1
	cout<<"Excelent  " <<name<<"!You have passed...\nYour CGPA is "<<cgpa<<endl;
	
else if(2<cgpa&&cgpa<=4)                //condition no2
	cout<<"Good  " <<name<<"!You have passed...\nYour CGPA is "<<cgpa<<endl;
	
else if(1<=cgpa&&cgpa<=2)               //condition no3
	cout<<"Oops  4" <<name<<"!You have failed...\nYour CGPA is "<<cgpa<<endl;
else if(1>cgpa&&cgpa>4)                 //condition no3
	cout<<"Oops  " <<name<<"!You have failed...\nYour CGPA is "<<cgpa<<endl;	
else
cout<<"You enterd any wrong input....\n";//cgpa output
}
}
else
cout<<"Your input is wrong...\n";
                                   }   //cgpa code end...
else if(firstselecion==2)   //time table code started                   
{
	//Code for Time Table
{
string day;
int slection; 
            cout<<"Enter option number only...\nYOU WANAT TO GET TIME TABLE!\n";           //slection
            cout<<"1.whole Week\n2.For specific day\n";
            cin>>slection;
if(slection==1)                                                                          //code for wholw week
{
cout<<"YOUR TIME TABLE  OF 1D FOR THE WHOLE WEEK IS AS FOLLOWS..\n";
cout<<"\n\n   DAY        	        COURCE              	                TEACHER NAME            	   TIME          ROOM NO\n\n\n";
cout<<"   MONDAY\t        PROMAMMING FUNDAMENTALS	                MR JALEES UL HASSAN       08::00AM - 09:30PM	 ROOM 27\n\n";
cout<<"   MONDAY	        PROMAMMING FUNDAMENTALS(LAB)	        MS IRAM FATIMA	          11::00AM - 02:30PM  	 LAB-7\n\n";
cout<<"   TUESDAY	        CALCULUS AND ANALYTICAL GEOMETERY    	MS TAHA AMJAD             08::00AM - 11:00PM  	 ROOM 24\n\n";
cout<<"   TUESDAY	        ENGLISH	                                MS NOSHEEN	          11::00AM - 12:30PM   	 ROOM 25\n\n";
cout<<"   TUESDAY	        PROGRAMMING FUNDAMENTALS              	MR JALEES UL HASSAN	  01::00AM - 02:30PM     ROOM 25\n\n";
cout<<"   WEDNESDAY	        APPLIED PHYSICS	                        MOHAMMAD JUMAID TARIQ	  08::00AM - 11:00PM  	 ROOM 24\n\n";
cout<<"   WEDNESDAY	        ENGLISH	                                MS NOSHEEN	          01::00AM - 02:30PM     SE-AUDITORIUM\n\n";
cout<<"   THURSDAY	        ICT                                    	MR JALEES UL HASSAN	  01::00AM - 04:00PM	 ROOM 25\n\n";
cout<<"   FRIDAY	        ICT(LAB)                              	MR TAYYAB 	          10::30AM - 01:00PM     LAB-8\n\n";
cout<<"   FRIDAY	        PRE CALCULUS                            SABA IMTIAZ               02::00AM - 05:00PM  	 ROOM 16\n\n";
}
else if(slection==2)                                                                      //code for specific day
            cout<<"Enter day of the week in lower case to know the time table...\n";
cin>>day;
if(day=="sunday")
cout<<"OFF!....\n\t\tENJOY...(*_*)";
else if(day=="monday")
     {
     	cout<<"\n\n\tCOURCE NAME           	                       TEACHER NAME              TIME                       ROOM NO\n\n";
        cout<<"\t1.PROMAMMING FUNDAMENTALS	             MR JALEES UL HASSAN     	08::00AM - 09:30PM	    ROOM 27\n";
        cout<<"\t2.PROMAMMING FUNDAMENTALS(LAB)	             MS IRAM FATIMA	        11::00AM - 02:30PM  	    LAB-7\n";	
     }
else if(day=="tuesday")
     {
        cout<<"\n\n\tCOURCE NAME           	                       TEACHER NAME            	      TIME                  ROOM NO\n\n";
	    cout<<"\t1.CALCULUS AND ANALYTICAL GEOMETERY    	        MS TAHA AMJAD               08::00AM - 11:00PM      ROOM 24\n";
        cout<<"\t2.ENGLISH	                                MS NOSHEEN	            11::00AM - 12:30PM      ROOM 25\n";
        cout<<"\t3.PROGRAMMING FUNDAMENTALS              	MR JALEES UL HASSAN	    01::00AM - 02:30PM      ROOM 25\n";
     }
else if(day=="wednesday")
     {
        cout<<"\n\n\t1.COURCE NAME           	             TEACHER NAME            	   TIME                  ROOM NO\n\n";
   	    cout<<"\t2.APPLIED PHYSICS	                 MOHAMMAD JUMAID TARIQ	    08::00AM - 11:00PM  	ROOM 24\n";
        cout<<"\t3.ENGLISH	                         MS NOSHEEN	            01::00AM - 02:30PM    	SE-AUDITORIUM\n";
     }
else if(day=="thursday")
     {
     	 cout<<"\n\n\tCOURCE NAME           	               TEACHER NAME            	   TIME                  ROOM NO\n\n";
	   cout<<"\t1.ICT                              MR JALEES UL HASSAN       01::00AM - 04:00PM	         ROOM 25\n";
     }
else if(day=="friday")
     {
     	 cout<<"\n\n\tCOURCE NAME           	      TEACHER NAME            	           TIME                  ROOM NO\n\n";
       cout<<"\t1.ICT(LAB)                     MR TAYYAB 	            10::30AM - 01:00PM    	LAB-8\n";
       cout<<"\t2.PREE CALCULUS                SABA IMTIAZ          	    02::00AM - 05:00PM  	ROOM 16\n";
     }
else if(day=="saturday")
cout<<"OFF!....\n\t\tENJOY...(*_*)";
}
}
else if(firstselecion==3)                                //code for attendace
                                    
				{
					string feename,sectoion,rollno;
					cout<<"Only BSSE fee structure is available..\nEnter your name\n";
					cin>>feename;
					cout<<"Enter you section \n";
					cin>>sectoion;
					cout<<"Also enter your Roll no.\n";
					cin>>rollno;
					
				}
			
	  	
	}
	
}



