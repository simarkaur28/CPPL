//using Object oriented system enter and display details of 5 people

#include<iostream>
#include<conio.h>
using namespace std;
class details
{
	private:
		char name[20], address[100],telno[10];
	public:
			
	void getdata()
	{	
	cout<<"\nEnter name: ";
	cin>>name;
	
	cout<<"\nEnter Address: ";
	cin>>address;
	
	cout<<"\nEnter telephone Number: ";
	cin>>telno;
	}
	
	void printdata()
	{
	cout<<name<<endl;
	cout<<address<<endl;
	cout<<telno<<endl;
	}	
};
	int main()
	{
	
	details p[5];
	for(int i=0;i<5;i++)
	{
	p[i].getdata();
	p[i].printdata();
	}

	getch();
	}