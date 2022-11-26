#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int Credit_hours, Marks;
	float GPA, CGPA;
	for (int i=1; i<=10; i++)
	{
		cout<<"Enter the Obtained Marks"<<endl;
		cin>>Marks;
		cout<<"Enter the the credit hours of the Subject"<<endl;
		cin>>Credit_hours;
		if(i==6)
		break;
	}
	
	return 0;
}
