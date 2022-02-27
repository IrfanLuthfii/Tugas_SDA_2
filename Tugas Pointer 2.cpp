#include <iostream>
#include <string>
using namespace std;

int main() {
 int a,b,c;
 int *p1,*p2,*p3;
 a=10;
 cout<<"Nilai a : "<<a<<"\n";
 b=15;
 cout<<"Nilai b :"<<b<<"\n";
 c=27;
 cout<<"Nilai c :"<<c<<"\n";
 p1=&a;
 cout<<"Alamat p1 :"<<p1<<"\n";
 p2=&b;
 cout<<"Alamat p2 :"<<p2<<"\n";
 *p1= c;
 cout<<"Nilai p1 :"<<*p1<<"\n";
 a=*p2;
 cout<<"Nilai a :"<<a<<"\n";
 b=6;
 cout<<"Nilai b :"<<b<<"\n";
 p3=&b;
 cout<<"Alamat p3 :"<<p3<<"\n";
 p3=&c;
 cout<<"Alamat p3 :"<<p3<<"\n";
 *p1=*p3;
 cout<<"Nilai p1 :"<<*p1<<"\n";
 cout<<"Nilai p3 :"<<*p3<<"\n";
}
