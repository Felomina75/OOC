#include<iostream.h>
class student
{
	private:
		  char name[20],regd[10],branch[10];
			int sem;
	public:
		void input()
		{
	        cout<<"Enter the Name:";
	        cin>>name;
	        cout<<"Enter the Regdno.:";
	        cin>>regd;
	        cout<<"Enter the Branch:";
	        cin>>branch;
	        cout<<"Enter the Semester:";
	        cin>>sem;
        }
		void display()
		{
	        cout<<"\nName:"<<name;
	        cout<<"\nRegdno.:"<<regd;
	        cout<<"\nBranch:"<<branch;
        	cout<<"\nSemester:"<<sem;
    }
};
void main()
{
	student s;
	s.input();
	s.display();
}
