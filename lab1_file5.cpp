#include<iostream>
#include<math.h>
using namespace std;
int main()
{
 double r;
 cout<<"Enter radius of the circle : ";
 cin>>r;
 cout<<"\n\nDiameter of the circle : "<<2*r;
 cout<<"\n\nPerimeter of the circle : "<<2*M_PI*r;
 cout<<"\n\nArea of the circle : "<<M_PI*r*r;
return 0;
}
