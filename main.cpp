#include "add.cpp"
#include <iostream>
using namespace std;
int sum(int,int);
int main()
{
int m,n,p;
cout<<"Enter the first number: "<<endl;
cin>>m;
cout<<"Enter the second number: "<<endl;
cin>>n;
p=sum(m,n);
cout<<"The sum of the two numbers is: "<<p<<endl;
return 0;
}
