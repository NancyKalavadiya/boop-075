#include<iostream>
using namespace std;

int main()
{
int n,a=0,b=1,i,c;
cout<<"enter the N\n";
cin>>n;
cout<<a<<"\n"<<b<<"\n";
for(i=3;i<=n;i++)
{
	c=a+b;
	cout<<c<<"\n";
	a=b;
	b=c;
}
return 0;
}
