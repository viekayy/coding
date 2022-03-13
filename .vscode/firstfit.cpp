#include <iostream>
using namespace std;

void firstfit(int ms[],int ps[],int n){
    cout<<"process\t process size \t memory allocated\n";
    for(int i=0;i<n;i++){
        int temp=0;
        if(ms[i]>=ps[i]){
            temp=ms[i];
        }
        cout<<"p"<<i<<"\t\t"<<ps[i]<<"\t\t"<<temp<<endl; //doubt
    }

}
int main(){
    cout<<"enter the number of processes";
    int n;
    cin>>n;
    int ms[n];
    for(int i=0;i<n;i++){
        cout<<"enter the memory size"<<i+1<<":";
        cin>>ms[i];
    }
    int ps[n];
    
    for(int i=0;i<n;i++){
        cout<<"enter the process size"<<i+1;
        cin>>ps[i];
    }
    firstfit(ms,ps,n);

}