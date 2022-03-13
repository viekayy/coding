#include <iostream>
using namespace std;
void bf(int ms[],int psz[], int n){
    for(int i=1;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(ms[j]>ms[j+1]){
                int temp;
                temp=ms[j+1];
               ms[j+1]=ms[j];
               ms[j]=temp;
            }
        if(psz[j]>psz[j+1]){
            int temp;
            temp=psz[j+1];
            psz[j+1]=psz[j];
            psz[j]=temp;
        }
    } 
    }
        cout<<"process number\t process memory\t memory allocated \n";

    for(int i=0;i<n;i++){
        int temp;
        if(ms[i]>psz[i]){
            temp=ms[i];
            cout<<"process"<<i<<psz[i]<<"\t\t"<<temp<<endl;
        }
    }
}
int main(){
    cout<<"enter the number of processes :";
    int n,i;
    cin>>n;
    cout<<"enter the memory sizes";
    int ms[n];
    for(i=0;i<n;i++){
        cin>>ms[i];
    }
    cout<<"enter the process sizes<<";
    int psz[n];
    for(i=0;i<n;i++){
        cin>>psz[i];
    }
    bf(ms,psz,n);
    return 0;
}