#include <iostream>
using namespace std;
int main(){
    cout<<"enter the number of processes";
    int n,i;
    cin>>n;
    int bt[n];
    for(int i=0;i<n;i++){

    cout<<"enter the burst time of process"<<i;
    cin>>bt[i];

   }
   int wt[n];
   int tat[n];
   wt[0]=0;
   tat[0]=bt[0]+wt[0];
   for(int i=1;i<n;i++){

   tat[i]=bt[i]+wt[i];
   wt[i]=tat[i-1];
   }
   cout<<"process\t\t"<<"waiting time\t\t"<<"tat"<<endl;
    for(int i=1;i<n;i++){
   cout<<i<<"\t\t"<<wt[i]<<"\t\t"<<tat[i];}
return 0;
}