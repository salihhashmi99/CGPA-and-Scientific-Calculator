#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
		// Functions declaration
void Main_menu ();
		// functions for logical operations
void logic ();
void add();
void sub ();
void multiply ();
void divide ();
		// functions for trignometric operations
void trig ();
void Sin ();
void Cos ();
void Tan();
		// functions for power functions 
void Power ();
void power ();
void sqroot ();
		// functions for logrithmic functions
void log ();
void lg10 ();
void ln ();
int main ()
{
		Main_menu ();
}
		// Function to display the main menu
void Main_menu ()
{
	int choice1;
	cout<<"\n\n\tSCIENTIFIC CALCULATOR\n\n";
	cout<<"\t1. Logical Operations\n";
	cout<<"\t2. Trignometric\n";
	cout<<"\t3. Power\n";
	cout<<"\t4. Logrithmic\n";
	cout<<"\t5. Exit Program\n";
	cout<<"\tEnter your choice :";
	cin>>choice1;
	switch (choice1)
	{
		case 1:
			{
				system ("cls");
				system  ("color f1");
				logic ();
				break;
			}
		case 2:
			{
				system ("cls");
				system  ("color f1");
				trig ();
				break;
			}
		case 3:
			{
				system ("cls");
				system  ("color f1");
				Power ();
				break;
			}
		case 4:
			{
				system ("cls");
				system  ("color f1");
		    	log ();
				break;
			}
		case 5:
			{
				system  ("color f1");
				system  ("cls");
				exit;
				break;
			}	
		default :
			{
				system ("cls");
				cout<<"Invalid choice";
				main ();
			}						
	}
}
		// Function for logical operations
void logic ()
{
	int choice2;
	xy :
	cout<<"\n\n\tLogical Operations\n\n";
	cout<<"\t1. Addition \n";
	cout<<"\t2. Substraction\n";
	cout<<"\t3. Multiplication\n";
	cout<<"\t4. Division\n";
	cout<<"\t5. Go back\n";
	cout<<"\t6. Exit Program\n";
	cout<<"\tEnter your choice :";
	cin>>choice2;
	switch (choice2)
	{
		case 1:
			{
				system ("cls");
				system  ("color f1");
				add ();
				break;
			}
		case 2:
			{
				system ("cls");
				system  ("color f1");
				sub ();
				break;
			}
		case 3:
			{
				system ("cls");
				system  ("color f1");
				multiply ();
				break;
			}
		case 4:
			{
				system ("cls");
				system  ("color f1");
				divide ();
				break;
			}
		case 5:
			{
				system ("cls");
				system  ("color f1");
				Main_menu ();
				break;
			}
		case 6:
			{
				system ("cls");
				system ("color f1");
				exit;
				break;
			}		
		default :
			{
				system ("cls");
				cout<<"\tInvalid choice\n\tTry again";
				goto xy;
				break;
			}				
	}
}
//		Function for sum
void add()
{
	double a,b;
	cout<<"Enter first number"<<endl;
	cin>>a;
	cout<<"Enter second number"<<endl;
	cin>>b;
	cout<<a<<"+"<<b<<"="<<a+b;
}
//		Function for substraction
void sub ()
{
	double a,b;
	cout<<"Enter first number"<<endl;
	cin>>a;
	cout<<"Enter second number"<<endl;
	cin>>b;
	cout<<a<<"-"<<b<<"="<<a-b;
}
//		Function for multiplication
void multiply ()
{
	double a,b;
	cout<<"Enter first number"<<endl;
	cin>>a;
	cout<<"Enter second number"<<endl;
	cin>>b;
	cout<<a<<"*"<<b<<"="<<a*b;
}
//		Function for division
void divide ()
{
	double a,b;
	cout<<"Enter first number"<<endl;
	cin>>a;
	cout<<"Enter second number"<<endl;
	cin>>b;
	cout<<a<<"/"<<b<<"="<<a/b;
}
//		Function for Trignometric operations
void trig ()
{
	xy:
	int choice3;
	cout<<"\n\n\tTrignometric Operations\n\n";
	cout<<"\t1. SIN \n";
	cout<<"\t2. COS\n";
	cout<<"\t3. TAN\n";
	cout<<"\t4. Go back\n";
	cout<<"\t5. Exit Program\n";
	cout<<"\tEnter your choice :";
	cin>>choice3;
	switch (choice3)
	{
		case 1:
			{
				system ("cls");
				system  ("color f1");
				Sin ();
				break;
			}
		case 2:
			{
				system ("cls");
				system  ("color f1");
				Cos ();
				break;
			}
		case 3:
			{
				system ("cls");
				system  ("color f1");
				Tan ();
				break;
			}
		case 4:
			{
				system ("cls");
				system  ("color f1");
				Main_menu ();
				break;
			}
		case 5:
			{
				system ("cls");
				system ("color f1");
				exit;
				break;
			}			
		default :
			{
				system ("cls");
				cout<<"\tInvalid choice\n\tTry again";
				goto xy;
				break;
			}
						
	}
}
//		Function for SIN
void Sin ()
{
	double a,b;
	cout<<"Enter number:";
	cin>>b;
	a=b/57.295;
	cout<<sin(a);
}
//		Function for COS
void Cos ()
{
	double a,b;
	cout<<"Enter number:";
	cin>>b;
	a=b/57.295;
	cout<<cos(a);
}
//		Function for TAN
void Tan ()
{
	double a,b;
	cout<<"Enter number:";
	cin>>b;
	a=b/57.295;
	cout<<tan(a);
}
//		Function for power and square root operations
void Power ()
{
	xy :
	int choice4;
	cout<<"\n\n\tPower Functions\n\n";
	cout<<"\t1. Power\n";
	cout<<"\t2. Square Root\n";
	cout<<"\t3. Go back\n";
	cout<<"\t4. Exit Program\n";
	cout<<"Enter your choice :";
	cin>>choice4;
	switch (choice4)
	{
		case 1:
			{
				system ("cls");
				system  ("color f1");
				power ();
				break;
			}
		case 2:
			{
				system ("cls");
				system  ("color f1");
				sqroot ();
				break;
			}
		
		case 3:
			{
				system ("cls");
				system  ("color f1");
				Main_menu ();
				break;
			}
		case 4:
			{
				system ("cls");
				exit;
				break;
			}			
		default :
			{
				system ("cls");
				cout<<"\tInvalid choice\n\tTry again";
				goto xy;
				break;
			}
						
	}
}
//		Function for power function
void power ()
{
	double a,b;
	cout<<"Enter number:";
	cin>>a;
	cout<<"Enter power:";
	cin>>b;
	cout<<pow(a,b);
}
//		function for square root function
void sqroot ()
{
	double a;
	cout<<"Enter number:";
	cin>>a;
	cout<<sqrt(a);
}
//		Function for Logrithmic operations
void log ()
{
	xy:
	int choice5;
	cout<<"\n\n\tLogrithmic Operations\n";
	cout<<"\t1. Log base 10\n";
	cout<<"\t2. Natural Log\n";
	cout<<"\t3. Go Back\n";
	cout<<"\t4. Exit Program\n";
	cout<<"\tEnter your choice:";
	cin>>choice5;
	switch (choice5)
	{
		case 1:
			{
				system ("cls");
				system  ("color f1");
				lg10 ();
				break;
			}
		case 2:
			{
				system ("cls");
				system  ("color f1");
				ln ();
				break;
			}
		
		case 3:
			{
				system ("cls");
				system  ("color f1");
				Main_menu ();
				break;
			}
		case 4:
			{
				system ("cls");
				exit;
				break;
			}			
		default :
			{
				system ("cls");
				cout<<"\tInvalid choice\n\tTry again";
				goto xy;
				break;
			}
						
	}
}
//		Function for Natural log 
void ln ()
{
	double a;
	cout<<"Enter number";
	cin>>a;
	cout<<log(a);
}
//		Function for log with base 10
void lg10 ()
{
	double a;
	cout<<"Enter number";
	cin>>a;
	cout<<log10(a);
}
