#include <conio.h>
#include <iostream>
 using namespace std;

int main()
{
  int pamt;
  int per;
  int irate;
  int si;
  int tamt;
   
   cout<< " Enter the pamt : "  ;
   cin>>pamt;
   cout<<" per : ";
   cin>> per;
   cout<< " irate : ";
   cin>>irate;

   si=(pamt*per*irate)/100;
   cout<<"Interest : "<<si;
   tamt=pamt+si;
   cout<<"total amount : "<<tamt;
   return 0;
   


}
