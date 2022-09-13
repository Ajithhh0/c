#include<iostream>
using namespace std;

int prime();

int main()
{
        
        int num,i,flag = 0;
        num = prime();
        for( i= 2;i <= num/2; ++i)
        {
            if(num%i == 0)
            {
                flag =1;
                break;

            }
        }
    if (flag == 1)
    {
        cout<<num<<"not prime";


    }
    else
    {
        cout<<num<<"Prime";

    }

    return 0;
}
    int prime(){

        int n;
         cout<<"Enter the number : "<<endl;
         cin>>n;

         return n;

    
  }

