#include<iostream>
using std::cout;
using std::cin;
int main()
{
 int a=0,b=0;
 cout<<"Enter any two Integer:\n";
 cin>>a>>b;
 cout<<"Summation of "<<a<<" and "<<b<<" : "<<(a+b);
 cout<<"\nSubstracting "<<b<<" from "<<a<<" : "<<(a-b);
 cout<<"\nMultiplying "<<a<<" and "<<b<<" : "<<(a*b);
 cout<<"\nDividing "<<a<<" by "<<b<<" : "<<(a/b);
 cout<<"\nRemainder : "<<(a%b);
 return 0;
}
