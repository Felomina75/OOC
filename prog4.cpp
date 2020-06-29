#include<iostream.h>
class student
{
	private:
		  char name[20],regd[10],branch[10];
			int sem;
	public:
		void input();
		void display();
};
void student::input()
{
	cout<<"Enter the Name:";
	cin>>name;
	cout<<"Enter the Regno.:";
	cin>>regd;
	cout<<"Enter the Branch:";
	cin>>branch;
	cout<<"Enter the Semester:";
	cin>>sem;
}
void student::display()
{
	cout<<"\nName:"<<name;
	cout<<"\nRegno.:"<<regd;
	cout<<"\nBranch:"<<branch;
	cout<<"\nSemester:"<<sem;
}
void main()
{
	student s;
	s.input();
	s.display();
}
