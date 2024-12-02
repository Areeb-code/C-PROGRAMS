#include<iostream>
using namespace std;
int n;
class cricketer
{
	public:
		string name;
		int runs;
		float avg;
	void print ()
	{   
		cout<<"___________________________________________________"<<endl;
		cout<<endl;
		cout<<"|||"<<"    "<<name<<"    "<<"||"<<"    "<<runs<<"    "<<"||"<<"    "<<avg<<"    "<<"|||";
	}
};

int main()
{
	cout<<"PLEASE ENTER NUMBER OF CRICKETERS YOU WANT TO ENTER:";
	cin>>n;
	cricketer* cricketers = new cricketer[n];
	for(int i=0;i<n;++i)
	{   cout<<"______________________________________________________________________"<<endl;
		cout<<"PLEASE ENTER THE CRICKETER Number "<<i+1<<" NAME :--"<<endl;
		cout<<"Name:";
		cin.ignore();
		getline(cin,cricketers[i].name);
		
		cout<<endl;
		cout<<"PLEASE ENTER THE CRICKETER Number "<<i+1<<" TOTAL SCORE :--"<<endl;
		cout<<"RUNS:";
		cin>>cricketers[i].runs;
		
		cout<<endl;
		cout<<"PLEASE ENTER THE CRICKETER Number "<<i+1<<" AVERAGE :--"<<endl;
		cout<<"AVERAGE:";
		cin>>cricketers[i].avg;
		
	}
	cout<<"________________________________________________________________________________________________________________________\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<"                              DISPLAYING CRICKETER'S DATA"<<endl;
	cout<<endl;
	cout<<"_____________________________________________________________________________________________________________________"<<endl;
	cout<<"|||   NAME    ||    RUNS    ||    AVERAGE    |||"<<endl;
	for(int i=0;i<n;++i)
	{
		
		cricketers[i].print();
		cout<<endl;
	}
	delete[]cricketers;
	return 0;
}
