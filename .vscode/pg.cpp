#include <iostream>
using namespace std;
int main()
{ int k, i,n,a[10]={1,3,4,5,6,6,6,5,4,0};
    cout<<"enter the number you want to search";
    cin>>k;
    for(i=0;i<n;i++)
   { if( a[i]==k)
    {
        cout<<"number is found"<<i;
    }
        else{
        cout<<"number is not in the list";
        }
    
    
    }
    
   }
    return 0;
}