#include <iostream.h> 
void main()
{
    int a[3][3], s=0, ms=0, ss=0;
    cout<<"Enter the 3x3 matrix:"<<endl;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin>>a[i][j];
    cout<<"The 3x3 matrix is"<<endl;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cout<<a[i][j]<<"\t";
        cout<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            s=s+a[i][j];
            if (i == j) 
                ms=ms+a[i][j]; 
            if ((i + j) == 2) 
                ss=ss+a[i][j]; 
        }
    }
    cout<<"Sum of the matrix elements is:"<<s<<endl;
    cout<<"Main diagonal sum is:"<<ms<<endl;
    cout<<"Secondary diagonal sum is:"<<ss<<endl;
}
