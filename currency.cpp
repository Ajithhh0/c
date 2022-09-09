//QAR TO INR
//1 QR = 20 RS

#include <iostream>
using namespace std;
 
int main() {

    const double qar_inr = 20;

    cout<<"QAR to INR converter "<<endl;
    cout<<" Enter the value of QAR"<<endl;

    double QAR = 0.0;
    double INR = 0.0;

    cin>>QAR;
     INR =QAR*qar_inr;

     cout<<QAR<<" The converted value : "<<INR<<" INR"<<endl;

     return 0; 
 

}