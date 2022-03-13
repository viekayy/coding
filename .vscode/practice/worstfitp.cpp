#include <iostream>
using namespace std;
void wf(int ms[], int ps[],int n){
    for(int i=0;i<n;i++){
     for(int j=0;j<n-i-1;j++){
         if(ms[j]>ms[j+1]){
             int temp;
             temp=ms[j+1];
             ms[i]=ms[j+1];
             ms[i]=temp;
         }
         if(ps[j]>ps[j+1]){
             int temp;
             temp=ps[j+1];
             ps[j+1]=ps[j];
             ps[j]=temp;
         }
         cout<<"process\t\t p memory\t\t memory allocated"<<endl;

        if(ms[i]>=ps[i]){
          int temp=ms[i];
            cout<<ps[i]<<"\t\t"<<temp;
        }
     }  
    
    }
}
int main(){
    cout<<"enter the number of processes";
    int n;
    cin>>n;
    cout<<"enter the memory size";
    int ms[n];
    for(int i=0;i<n;i++){
        cin>>ms[i];
    }
    cout<<"enter the process";
    int ps[n];
    for(int i=0;i<n;i++){
        cin>>ps[i];
    }
    wf(ms,ps,n);
    return 0;
}