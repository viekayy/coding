#include <iostream>
using namespace std;
int main(){
    cout<<"enter number of elements:";
    int n;
    cin>>n;
    cout<<"enter the elements :";
    int e[n];
    for(int i=0;i<n;i++){
        cin>>e[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n-i;j++){
            if(e[i]>e[j]){
                int temp;
                temp=e[i];
                e[i]=e[j];
                e[j]=temp;
            }
        }
    }for(int i=0;i<n;i++){
        cout<<e[i];
    }
    return 0;
}