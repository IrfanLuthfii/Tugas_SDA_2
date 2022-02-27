#include <iostream>
#include <string>
using namespace std;

int main() {
 int a,b,c;
 int *p1,*p2,*p3;
 a=10;
 cout<<"a :"<<a<<"\n";
 b=15;
 cout<<"b :"<<b<<"\n";
 c=27;
 cout<<"c :"<<c<<"\n";
 p1=&b;
 cout<<"p1 :"<<p1<<"\n";
 p2=p1;
 cout<<"p2 :"<<p2<<"\n";
 p1=&c;
 cout<<"p1 :"<<p1<<"\n";
 a=*p1;
 cout<<"a :"<<a<<"\n";
 p3=&b;
 cout<<"p3 :"<<p3<<"\n";
 *p2=8;
 cout<<"*p2 :"<<*p2<<"\n";
}
