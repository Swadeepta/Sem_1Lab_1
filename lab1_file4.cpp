#include<iostream>
using namespace std;
int main()
{
 double a,b;
 cout<<"Enter length of the rectangle : ";
 cin>>a;
 cout<<"\nEnter breadth of the rectangle : ";
 cin>>b;
 while(b>a)
 {
 cout<<"\n Breadth can't be greater than length....Please re-enter : ";
 cin>>b;
 }
 cout<<"\n\t\t\t Perimeter of the rectangle is "<<2*(a+b);
 cout<<"\n\n\n\t\t\t Area of the rectangle is "<<(a*b);
 return 0;
}
