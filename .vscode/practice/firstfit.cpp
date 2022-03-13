#include <iostream>
using namespace std;
void ff(int mem[],int psz[],int n){
    cout<<"process \t process size \t memoryallocated\n";
    for(int i=0;i<n;i++){
        int temp=0;
        if(mem[i]>=psz[i]){
            temp=mem[i];
            cout<<"p"<<i<<"\t\t"<<psz[i]<<"\t\t"<<temp<<endl;

        }
    }
    
}
int main() {
    cout<<"enter the number of processes";
    int n;
    cin>>n;
    int mem[n],psz[n];
    for(int i=0;i<n;i++){
            cout<<"enter the memory sizes :";

        cin>>mem[i];
    }
    cout<<"enter the process sizes :";
    for(int i=0;i<n;i++){
        cin>>psz[i];
    }
    ff(mem,psz,n);
}