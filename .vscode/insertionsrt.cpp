#include <iostream>
using namespace std;
int main(){
    cout<<"enter the number of elements  :";
    int n;
    cin>>n;
    cout<<"enter the elements:";
    int e[n];
    for(int i=0;i<n;i++){
        cin>>e[i];
    }
    for(int i=1;i<n;i++){
        int current=e[i];
        int j=i-1;
    while(e[j]>current && j>=0){
        e[j+1]=e[j];
        j--;
    }
    e[j+1]=current;
    }
    for(int i=0;i<n;i++){
        cout<<e[i];    
    }
}