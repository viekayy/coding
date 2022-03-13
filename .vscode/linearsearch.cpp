#include<iostream>
using namespace std;
int main()
    {
        int a[3]={1,2,3},n,i,k;
        cout<<"enter the number you want to find"<<endl;
        cin>>k;
        for(i=0;i<n;i++)
        {
        if (a[i]==k)
        cout<<"number is found at"<<i<<endl;
        break;
        }
        return 0;
    }   