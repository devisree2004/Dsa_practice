#include<iostream>
using namespace std;
int pow(int n,int p)
{
	int i,pro=1;
	for(i=1;i<=p;i++)
	{
		pro=pro*n;
	}
	return pro;
}
int main()
{
  int n,m,i=0,pro=0;
  cout<<"enter the number:";
  cin>>n;
  m=n;
  int b;
  cout<<"enter the base:";
  cin>>b;
  int rem=0;
  while(n!=0)
  {
	rem=n%b;
	n=n/b;
  pro=pro+rem*pow(10,i);
	i++;
  }
  cout<<"the number "<<m<<" with base "<<b<<" has a value "<<pro;
}