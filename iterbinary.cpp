#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int binarysearch(vector<int> v, int Find)
{

    int lo = 0, hi = v.size()-1;
    int mid;

    while(hi-lo>1){
        int mid = (hi+lo)/2;
        if(v[mid]<Find){
            lo =mid+1;

        }
        else{
            hi=mid;

        }
    }
        if(v[lo]==Find){
            cout<<"Found at"<<lo<<endl;


        }
        else if(v[hi]==Find){
            cout<<"Found at"<<hi<<endl;

          }
          else{
            cout<<"Not Found"<<endl;

          }
    }

    int main()
    {
         vector<int> v={0,1,2,3,4,5,6,7,8,9};
         int Find = 1;
         binarysearch(v,Find);

          Find = 7;
         binarysearch(v,Find);

          Find =10;
         binarysearch(v,Find);
         return 0;

    }
