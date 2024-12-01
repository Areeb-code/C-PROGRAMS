#include<iostream>
int n;
using namespace std;
class Student{
	private:
		
	public:
     int roll;
	 string name;
	 float GPA;	
};
int main()
{
	cout<<"PLEASE ENTER NUMBER OF STUDENT YOU WANT TO ENTER:";
	cin>>n;
	Student* students = new Student[n];
	for(int i=0;i<n;++i)
	{   cout<<"_____________________________________"<<endl;
		cout<<"PLEASE ENTER THE Student Number "<<i+1<<" NAME :--"<<endl;
		cout<<"Name:";
		cin.ignore();
		getline(cin,students[i].name);
		
		cout<<"_____________________________________"<<endl;
		cout<<"PLEASE ENTER THE Student Number "<<i+1<<" ROLL NO. :--"<<endl;
		cout<<"ROLL NUMBER:";
		cin>>students[i].roll;
		
		cout<<"_____________________________________"<<endl;
		cout<<"PLEASE ENTER THE Student Number "<<i+1<<"  :--"<<endl;
		cout<<"GPA:";
		cin>>students[i].GPA;
		
	}
	cout<<"____________________________________________________"<<endl;
	cout<<"DISPLAYING STUDENT DATA"<<endl;
	for(int i=0;i<n;++i)
	{
		cout<<"STUDENT NUMBER"<<i+1<<endl;
		cout<<"Name:"<<students[i].name<<endl;
		cout<<"ROLL NUMBER:"<<students[i].roll<<endl;
		cout<<"GPA:"<<students[i].GPA<<endl;
		cout<<"____________________________________________________"<<endl;
	}
	delete[]students;
	return 0;
}
