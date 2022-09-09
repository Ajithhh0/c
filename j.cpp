#include <iostream>
using namespace std;
int main()
{
   int num,t,sum=0;
   cout<<"Enter the no. : ";
   cin>>num;
   while(num!=0)
   {
    sum=sum+num%10;
    num=num/10;
   }
   cout<<"sum :"<<t<<"is :"<<sum;
   return 0;
}