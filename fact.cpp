#include<iostream>
using namespace std;
int main()
{
int a,i , factorial = 1;
cout<<"enter any number"<<endl;
cin>>a;
for(i = 1;i<a+1;i++)
{
factorial = factorial*i;
}
cout<<"the factorial of a number is "<< factorial<<endl;
}
//make recursive function
