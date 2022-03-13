#include<iostream>
using namespace std;
int main()
        {
            int numbers[30],i,n,ele,a[30];
            cout<<"enter number of elements";
            cin>>n;
            cout<<"enter numbers :";
           for(i=0;i<n;i++)
            {
                
            cin>>a[i]; 
            }
            for(i=0;i<n;i++)
            {
               cin>>a[i];
            }
            cout<<"enter the number you want to find";
            cin>>ele;
           for(i=0;i<n;i++)
           { if
            ( a[i]=ele)
             cout<<"number is found"<<a[i];    
        }
        return 0;
     }