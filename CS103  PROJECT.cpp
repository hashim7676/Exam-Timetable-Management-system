
// HEADER FILES
#include<iostream>
#include<string>
#include<stdlib.h>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>

using namespace std;

//functions used in the project
void exam_time_table();
void COE();
void create_students();
void create_CourseExam();
void ChangePassword();
void COELogin();
void Instructor();
void ExamRegister();
void MessageRead();
void MessageSend();
void InstructorLogin();
void Student();
void StudentLogin();
void GenerateStudent();
void CourseAssign();
void GenerateInstructor();
void COE();

//main function  
int main()                                                                       

{
  //Declaration of variables
  string num;
  char option ;
  
         
	cout<<"\t\t\t\tCreated by MUHAMMAD HASHIM" <<endl;
	cout<<endl;

	cout<<"\t\t\t\tRegistration Number : 2020303" <<endl;
	
	
	
	cout<<endl;
	cout<<endl;
	cout<<endl;
	

	
	cout << "\t\t\t\tBrabbers Exam Hall Management System" <<endl;
	
	cout<<endl;
	cout<<endl;
    cout<<endl;
	cout<<endl;

 
 
	cout << "\t\t\t\tPress 1 for  COE portal" << endl;
    cout<<endl;
    cout<<endl; 
	cout << "\t\t\t\tPress 2 for Instructor portal" << endl;
	cout<<endl;
	cout<<endl;
	cout << "\t\t\t\tPress 3 for Student portal" << endl;
	cout<<endl;
	cout<<endl; 
	cout << "\t\t\t\tPress 4 to Exit" << endl;
	cin>>num;
	cout<<endl;
	
	
	if(num=="1")                //if else selection statements start
     {
	  system("cls");	     //clears screen
	  
	  COELogin();             //function call
	                                                                     
	  
     }
   	 else if(num=="2")
     {
      
      system("cls");          //clears screen
      
      InstructorLogin();       //function call
     }
     else if(num=="3")
	 {
	 	
	  system("cls");              //clears screen
	  
	  StudentLogin();        //function call
	                                                   
     }
     
     else if(num=="4")
     {
      
	  system("cls");            //clears screen
	  
      return 0;              //code ends
	 }	
	   
     else
	 {
	  system("cls");        //clears screen
	
	  
	  cout<<"\t\t\tKindly choose an appropriate choice";
	  
	  system("pause");
	  

      }                 //end of if else selection statement

     
      return 0;
}
void COELogin()
{   
    ifstream coe;
    coe.open("COEpersonal.txt");     //file open
    
    //variable declaration and initialization
    int index=0;
    string name,coe_name,id,coe_id;
    
	cout<<"\t\t\tCOE LOGIN"<<endl;
	cout<<endl;
	cout<<endl;
	getline(cin,name);
	cout<<"\t\t\tCOE name : ";
	getline(cin,name);
	cout<<endl;
	cout<<endl;
	cout<<"\t\t\t COE ID : ";
	getline(cin,id);
	cout<<endl;
	cout<<endl;
  	
  do
   {
 	  getline(coe,coe_name);
	  getline(coe,coe_id);	
	  
	  
     
	 if(coe_name==name && coe_id==id)              //if else selection statements start
	 {
	 	
	   COE();                     //function call
	   
	 }
	 
	 else
	 {
	 	cout<<"\t\t\tThe  Name or ID is Incorrect, Please Try Again"<<endl;
	 	
	 	system("pause");
	 	
	 	system("cls");            //clears screen
   	 	
	 	COELogin();               //function call
	 	
	 }                              //end of if else selection statement
   }while(!coe.eof());
      coe.close();               //file close
}


void COE()                                                              
{
    
     int num;

     system("cls");                 //clears screen
     
	 cout<<"\t\t\t COE PORTAL "<<endl;
	 cout<<endl;
	 cout<<endl;
	 cout<<endl;
	 cout<<endl;
	 cout<<endl;
	 cout<<"\t\t\t"<<endl;
	 cout<<endl;
	 cout<<endl;
	 cout<<"\t\t\tPress 1 to send a message to instructor"<<endl;
	 cout<<endl;
	 cout<<endl;
	 cout<<endl;
	 cout<<"\t\t\tPress 2 to create a course exam"<<endl;
	 cout<<endl;
	 cout<<endl;
	 cout<<"\t\t\tPress 3 to create an instructor"<<endl;
	 cout<<endl;
	 cout<<endl;
	 cout<<"\t\t\tPress 4 to create a student"<<endl;
	 cout<<endl;
	 cout<<endl;
	 cout<<"\t\t\tPress 5 to assign a course/courses to the instructor"<<endl; 
	 cout<<endl;
	 cout<<endl;
	 cout<<"\t\t\tPress 6 to view and make changes in exam timetable"<<endl; 
	 cout<<endl;
	 cout<<endl;
	 cout<<"\t\t\tPress 7 to change password"<<endl;
	 cout<<endl;
	 cout<<endl;
	 cout<<"\t\t\tPress 8 to LOGOUT"<<endl;
	 cout<<endl;
	 cout<<endl;
	 cout<<"\t\t\t\t  pick the choice number : "<<endl;
	 cin>>num;
	 if(num==1)                          //if else selection statements start
	 {
	 	system("cls");           //clears screen
	 	
	 	MessageSend();           //function call
	 	
     }
	 else if(num==2)           
	 { 
	    system("cls");          //clears screen
	    
	 	create_CourseExam();       //function call
	 	
	 }
	 
	 else if(num==3)
	 {
	 	system("cls");            //clears screen
	 	
	 	GenerateInstructor();           //function call
	 }
	 else if(num==4)
	 {
	 	system("cls");             //clears screen
	 	
	 	GenerateStudent();       //function call
	 }
	 else if(num==5)
	 {
	 	system("cls");           //clears screen
	 	
	 	CourseAssign();            //function call
	 }
	 else if(num==6)
	 {
	 	system("cls");             //clears screen
	 	
	 	exam_time_table();           //function call
     }
      else if(num==7)
	 {
	 	system("cls");           //clears screen
	 	
	 	ChangePassword();       //function call
     }
     
      else if(num==8)   
	 {
	 	system("cls");           //clears screen
	 	
	 	main();                 // main function call
	 }
	  else
	  
	    system("cls");             //clears screen
	    
	 {
	 cout<<"*you have have chosen incorrect option."<<endl;
	 
	 system("pause");
	 
     }                                //end of if else selection statement
}
void InstructorLogin()                      
{ 
  //variable declaration and initialization
  string ID,instructorID,one;	
  string name,instructorname;
  string num;
  cin.ignore();
 
  cout<<endl; 
  cout<<endl;
 
  cin.clear();
  fflush(stdin);
 
  cout<<"\t\t\tINSTRUCTOR  LOGIN"<<endl;
  cout<<endl;
  cout<<"INSTRUCTOR NAME : ";
  getline(cin,name);
  cout<<endl;
  cout<<endl;
  cout<<"INSTRUCTOR ID : ";
  getline(cin,ID);

  ifstream instruct;
  instruct.open("INSTRUCTOR.txt");       //file open
 
  while(!instruct.eof())
  { 
   
   	 do 
	{
	 getline(instruct,instructorname);                              
	 getline(instruct,instructorID);
		
	} while(!instruct.eof() && name != instructorname );

                              
    if(instructorname==name  && instructorID==ID)   //if else selection statements start
    {
   	
    Instructor();                          //function call
    
    }
   
    else
    {
   	cout<<endl;
	cout<<"\t\t\tinstructor name or id is incorrect,plz try again";
	
	system("pause");
	
	system("cls");           //clears screen
      
  	InstructorLogin();             //function call
  	
   }              //end of if else selection statement
  }                                     
 instruct.close();		  //file close
}
void Student()                                    
{    
      string num;
       
	   system("cls");            //clears screen
	  cout<<"\t\t\tSTUDENT PORTAL"<<endl;
	  cout<<endl;
	  cout<<endl;
	  cout<<endl;
	  cout<<endl; 
	  cout<<endl;
	  cout<<"\t\t\tPress 1 to register for the course exam"<<endl;
	  cout<<endl;
	  cout<<endl;
	  cout<<"\t\t\tPress 2 to see when and where is your registered exam"<<endl;
	  cout<<endl;
	  cout<<endl;
	  cout<<"\t\t\tPress 3 to change password"<<endl;
	  cout<<endl;
	  cout<<endl;
	  cout<<"\t\t\tPress 4 to LOGOUT";
	  cout<<endl;
	  cout<<endl;
      cout<<"\t\t\t\t  pick the choice number : "<<endl;
	  cin>>num;
	  if(num=="1")                 //if else selection statements start
	  {
	 	system("cls");           //clears screen
	 	
	 	ExamRegister();          //function call
	   
	    	
      }
      else if(num=="2")
      {
	 	system("cls");               //clears screen
	 	
	 	exam_time_table();            //function call
	   
	    	
      }
      else if(num=="3")
     {
     	system("cls");               //clears screen
     	
     	ChangePassword();            //function call
     	
	 }
	  else if(num=="4")
	 {
	 	system("cls");                    //clears screen
	 	
	 	main();               // main function call
     }
	  else 
	 {
	 cout<<"*you have have chosen incorrect option."<<endl;
	 
	 system("pause");
	 
     }          //end of if else selection statement
}

	 	
 

void GenerateInstructor()                                  
{ 
  //variable declaration and initialization
  int index=0;
  char choice;
  string instructname[20],instructID[20];
  
  
  cout<<"\t\t\tCREATE AN INSTRUCTOR"<<endl;
  
  do
   {	
        getline(cin,instructname[index]);
  		cout<<"\t\t\tPlease enter the instructor name"<<endl;
  		cout<<endl;
  		cout<<endl;
	    getline(cin,instructname[index]);
	    cout<<endl;
  	    cout<<endl;                                                                             
		cout<<"\t\t\tPlease enter the instructor ID"<<endl;
		cout<<endl;
		cout<<endl;
		getline(cin,instructID[index]);
		cout<<endl; 
		cout<<endl;            
		cout<<"Press y/Y to add another instructor else press n/N"<<endl;
		cout<<endl;
		cout<<endl;
		cin>>choice;
        cout<<endl;
        cout<<endl;
		if(choice=='y')
		index++;	
    }while(choice!='n');
    ofstream file;
    file.open("INSTRUCTOR.txt",ios::app);     //file open
	    
	for(index=0;index<10;index++)
	{
	file<<instructname[index]<<endl;
	file<<instructID[index]<<endl;
	}
	
	file.close();               //file close
	system("cls");          //clears screen
	COE();                         //function call
}

void GenerateStudent()                            
{  
   
   //variable declaration and initialization 
  int index=0;
  char choice;
  string studentname[20],studentID[15];
	

  cout<<"\t\t\tCREATE A STUDENT"<<endl;
	
  do
  {
        getline(cin,studentname[index]);
		cout<<"Please enter the name of student"<<endl;
  		cout<<endl;
		cout<<endl;
		getline(cin,studentname[index]); 
		cout<<endl;                        
		cout<<endl;
		cout<<"Please enter the ID of the student"<<endl;
		cout<<endl;
		cout<<endl;
		getline(cin,studentID[index]);                     
		cout<<endl;
		cout<<endl;
		cout<<"Press y/Y to make another student else press n/N"<<endl;
		cout<<endl;
		cout<<endl;
		cin>>choice;
		if(choice=='y'|| choice=='Y')
  		index++;
  }
  
  while(choice!='n'|| choice=='N');
  
	    ofstream student;
	    student.open("STUDENTS.txt",ios::app);         //file open
	
	for(index=0;index<10;index++)
	{
	student<<studentname[index]<<endl;
	student<<studentID[index]<<endl;
	}
	student.close();            //file close
	
	COE();	                    //function call
}
void StudentLogin()                                      
{ 
  //variable declaration and initialization
  string studentname,ID,studentID,name; 
  
  cin.ignore();
 
  cout<<endl;
  cout<<endl;
 
  cin.clear();
  fflush(stdin);
 
  
  cout<<"\t\t\tSTUDENT LOGIN PORTAL"<<endl;
  cout<<endl;
  getline(cin,name);
  cout<<"\t\t\tEnter Student Name : ";
  getline(cin,name);
  cout<<endl;                                
  cout<<endl;
  getline(cin,ID);
  cout<<"\t\t\tEnter Student ID : ";
  getline(cin,ID);
  cout<<endl;
  cout<<endl;
  
  ifstream login;
  login.open("STUDENTS.txt");               //file open
 
 while(!login.eof())
 {
  
    do
    {	
    getline(login,studentname);
    getline(login,studentID);
    }
	while(!login.eof() && studentname!=name );
    
    
    if(studentname==name && studentID==ID )
   {
   	
    Student();                   //function call
    
   }
 	else
 	{
	 cout<<"\t\t\tThe Student Name or ID is Incorrect, Please Try Again"<<endl;
	 
	 system("pause");
	 
	 system("cls");               //clears screen
	 
	 StudentLogin();                //function call
    }
    
  }
 
 login.close();               //file close
 
}
void CourseAssign()                        
      
{   
     //variable declaration and initialization
     int index=0,numb;
	 char choice;
	 string coursename[20],instructname[15],instructID[15];
	
	 
	 cout<<"\t\t\tASSIGNING COURSES TO THEIR RESPECTIVE INSTRUCTORS"<<endl;
	 cout<<endl;
	 cout<<endl;
	 
  do
  {
	 getline(cin,instructname[index])  ; 	
	 cout<<"Please enter the instructor name"<<endl;
	 cout<<endl;
	 cout<<endl;
	 getline(cin,instructname[index]);                                  
	 cout<<endl;
	 cout<<"Please enter the instructor ID"<<endl;
	 cout<<endl;
	 cout<<endl;
	 getline(cin,instructID[index]);
	 cout<<endl;
	 cout<<endl;
	 cout<<"Courses to assign:";
	 cin>>coursename[index];
	 cout<<endl;
	 cout<<endl;
	 cout<<"Press y/Y to assign another course to the instructor else press n/N"<<endl;
	 cout<<endl;
	 cout<<endl;
	 cin>>choice;
	 if(choice=='y'|| choice=='Y')            //if else selection statements start
	 index++;
  }
  
  while(choice!='n'|| choice=='N');
	 ofstream assign;
	 assign.open("COURSEASSIGN.txt",ios::app);           //file open
	 
	 for(index=0;index<10;index++)
	 {
	 assign<<instructname[index]<<endl;
	 assign<<coursename[index]<<endl;
	 }
	 
	 assign.close();                //file close
	 COE();                              //function call
}	 

  
void MessageSend()                           
{ 
   //variable declaration and initialization
   int num;
   string messages;
   
   
   ofstream send;
   send.open("SENDMESSAGE.txt", ios::app);         //file open
   cout<<endl;
   cout<<endl;
   cout<<"Enter your message."<<endl;
   cin.clear();
   fflush(stdin);	
	
   getline(cin,messages);
   send<<messages;
		
   cout<<"press 0 to go to main"<<endl;

   
   cout<<endl;
   cout<<endl;
   cin>>num;
   
   if(num==0)                     //if else selection statements start
   {
   system("pause");
   
   system("cls");            //clears screen
   
   COE();                         //function call
   
   }                      
   
  
  send.close();             //file close
    
}


void MessageRead()                     
{
    string messages;
    
	ifstream read;
	read.open("SENDMESSAGE.txt");              //file open
	cout<<endl;
	cout<<endl;
	cout<<endl<<"\t\t\tRECIEVED MESSAGES"<<endl;
	cout<<endl;
	cout<<endl;
	
	getline(read,messages);
		
	cout<<"Message recieved is : "<<endl;
	cout<<messages<<endl;
		
	
	read.close();          //file close
	
	system("pause");
	
	system("cls");              //clears screen
	
	Instructor();                  //function call

  
}


void ExamRegister()
{ 
  //variable declaration and initialization
  int num;
  int index=0;
  char choice;
  string course,name[20],courseexam[10],regnum[15];
  
  ofstream exam;
  exam.open("createexam.txt");         //file open
  cout<<endl;
  cout<<endl;
  cout<<"\t\t\tREGISTRATION OF COURSE EXAM"<<endl<<endl;
  cout<<endl;
  cout<<endl;
  
  do
  {
    getline(cin,name[index]);
  	cout<<"\t\tStudent Name : ";
	getline(cin,name[index]);
	cout<<endl;
	cout<<endl;                          
  	exam<<name[index];
  	cout<<"\t\tID no : ";
	getline(cin,regnum[index]);
  	cout<<"\t\texams you want to register :";
	cin>>num;
	cout<<endl;
	cout<<endl;
  	cout<<"/t/tPlease enter the name of exams you want to register :"<<endl;
  	
  	for(index=1;index<=num;index++)
    {
     cout<<endl;
     cout<<endl;
	 cin>>course[index];	
     exam<<course[index]<<endl;
	 cout<<endl;
	 cout<<endl;	
    }
    
    cout<<"press Y/y if you want to register exam for another student"<<endl;
    cout<<"else press N/n to go to instructor portal"<<endl;
	cin>>choice; 	
  	if(choice=='y'|| choice=='Y')           //if else selection statements start
    cout<<endl;
    cout<<endl;
  }while(choice!='n'|| choice==!'N');
	
	 exam.close();             //file close
	 
	 system("pause");
	 
     system("cls");              //clears screen
     
     Instructor();                     //function call
}



void Instructor()
 {
 	//variable declaration and initialization
	string num;
    string name,instructorname[30];
    
      system("cls");                            //clears screen
     
	  cout<<"\t\t\tINSTRUCTOR PORTAL"<<endl;
	  cout<<endl;
	  cout<<endl;
	  cout<<endl;
	  cout<<endl;
	  cout<<endl;
	  cout<<"\t\t\tPress 1 to create students with their course id"<<endl;
	  cout<<endl;
	  cout<<endl;
	  cout<<"\t\t\tPress 2 to read message of COE"<<endl;
	  cout<<endl;
	  cout<<endl;
	  cout<<"\t\t\tPress 3 to return back"<<endl;
	  cout<<endl;
	  cout<<endl; 
      cout<<"\t\t\t\t  pick the choice number : "<<endl;
      cin>>num;
  
    if(num=="1")                  //if else selection statements start
	{
			
        system("cls");                   //clears screen
					
   	 	create_students();              //function call
   	 	
	}
    else if(num=="2")
    
        
    {
     system("cls");                   //clears screen	
     
	 MessageRead();                  //function call
	 
     
    }
     
    else if(num=="3")
    {
     	
     system("cls");                    //clears screen
     
     main();                           //main function call
     
     
    }
     else
    {
	  cout<<endl<<cout<<"\t\tYou have selected incorrect option, please try again";system("pause");
	 
	 system("cls");                  //clears screen
	 
	 Instructor();                    //function call
    }                          //end of if else selection statement
    
 }

void ChangePassword()
{
  //variable declaration and initialization
  string newpass,oldpass;
  string var;
  char choice;
  
   system ("CLS");                 //clears screen
   ofstream file;
   file.open("STUDENTS.txt", ios::app);          //file open
			
   cout << "Do you want to change password?(y/n)" << endl;
   cout<<endl;
   cout<<endl;
   cin>>choice;

	if(choice=='y'|| choice=='Y')          //if else selection statements start
	{
		getline(cin,oldpass);
		system ("CLS");				//clears screen
	cout<<" Old password :"<<endl;
	getline(cin,oldpass);
	cout<<endl;
	cout<<endl;
	cout<<"New password :"<<endl;
	getline(cin,newpass);
	cout<<endl;
	cout<<endl;
	cout<<"Confirm  new password :"<<endl;
    getline(cin,newpass);
    cout<<endl;
    cout<<endl;
	cout<<"Old Password : "<<oldpass<<endl;
	var=newpass;
	newpass=oldpass;
	oldpass=var;
    cout<<"New password : "<<oldpass<<endl;
    cout << "You have successfuly changed your password "<<endl;
    
	system ("PAUSE");
	
	file<<oldpass;
	
	system ("CLS");             //clears screen
				
    }
			 		            
	file.close();             //file close
	
	main();                    //main function call
}
void create_CourseExam()
 {
	//variable declaration and initialization							                               
    char choice;
	int index=0;                           
	string courseID[30];
	string instructorID[30];
	string classstrength[50];
	
	cout<<"\t\t\tDESIGNING AN EXAM"<<endl;
	cout<<endl;
	cout<<endl;
	do
	{	
	    getline(cin,instructorID[index]);
	                                                
		cout<<"\t\t\tInstructor ID : ";
		getline(cin,instructorID[index]);
		cout<<endl;
		cout<<endl;
		cout<<"\t\t\t Class strength : ";
		getline(cin,classstrength[index]);
		cout<<endl;
		cout<<endl;
		cout<<"\t\t\t Course ID : "; 
		getline(cin,courseID[index]);
		cout<<endl;
        cout<<endl;                                                                                    
        
		cout<<"Exam created, Do you want to create another exam "<<endl;
		cout<<"press y/Y if you want to create another else press n/N"<<endl;
		cin>>choice;
		
		if(choice=='y' )              //if  selection statements start
		
		index ++;
		
	}
	while(choice!='n' );
	
	ofstream course;
	course.open("createexam.txt",ios::app);         //file open
	
	for(index=0;index<30;index++)
	{
	course<<instructorID[index]<<endl;
	course<<classstrength[index]<<endl;
	course<<courseID[index];
	}
 
    course.close();          //file close
	
	system("cls");             //clears screen
	
	COE();                   //function call
}

void create_students()                            
{   
    //variable declaration and initialization
    int student_ID[10],course_ID;
	char choice;
	int index=0;
	string student_name[10];
	
	cout<<"\t\t\tCREATE STUDENTS ON BASIS OF COURSE ID"<<endl;
	cout<<endl;
	cout<<endl;
	
	do
	{
	    getline(cin,student_name[index]);
		cout<<"please enter the student name"<<endl;
		cout<<endl;
	    cout<<endl;
		getline(cin,student_name[index]);                         
		cout<<endl;
		cout<<"please enter the student id "<<endl;
		cout<<endl;
		cout<<endl;
		cin>>student_ID[index];                     
		cout<<endl;
		cout<<endl;
		cout<<"Course ID : ";
		cout<<endl;
		cout<<endl;
		cin>>course_ID;
		cout<<"Student created, Do you want to create another student "<<endl;
		cout<<"press y/Y if you want to create another else press n/N"<<endl;
		cin>>choice;
		
	if(choice=='y' || choice=='Y')           //if  selection statements start
		
		index ++;
		
	}while(choice!='n' || choice!='N');
	
	ofstream stu;
	stu.open("students.txt",ios::app);       //file open
	
    while(choice!='n');
	
	ofstream stud;
	stud.open("STUDENTS.txt",ios::app);          //file open
	
	for(index=0;index<10;index++)
	{
	stud<<student_name[index]<<endl;
	stud<<student_ID[index]<<endl;
	}
	
	stud.close();                 //file close
	
	system("cls");                    //clears screen
	
	COE();                       //function call
}
void exam_time_table()
 {
 	
 	//variable declaration and initialization
    string subjects[]={"MT101","CS121","CS103","HM101","CS131","CS103L"};



	srand(time(0));
	int total_students;
	cout << "enter total numbers of students  :  ";
	cin >> total_students;
	int extra=total_students%5;
	int total_papers_of_day=total_students/5;
	int day=1;
	do
	{
		cout << "Time\t\t\tHall\t\t\tCourse\t\t\tDay\n";
		for (int i=1 ; i<=total_papers_of_day ; i++)
		{
			int time=rand()%5+8;
			if(time==13)
				time=1;
			cout  << time << ":00" << "\t\t\t"  << rand()%7+1 << "\t\t\t"  
			<< subjects[rand()%6] << "\t\t\t" << day << endl;
				
			sleep(1);
		}
		cout << "\n...............................................................\n";
		day++;
		total_students-=total_papers_of_day;
		if (day==5)                  //if else selection statements start
		{	
			total_papers_of_day+=extra;
		}
		system("pause");
	}while(total_students>0);
	
}
