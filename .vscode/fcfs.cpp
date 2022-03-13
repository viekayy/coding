#include<iostream>
using namespace std;

int main(){
	
	int n;
	cout<<"**********enter number of processes************";
	cin>>n;
	int bt[n];
	for(int i=0;i<n;i++){
		
		cout<<"**********enter the process burst time : "<<i<<" ";
		cin>>bt[i];
	}
	int wt[n],tat[n];
	wt[0]=0;
	tat[0]=bt[0]+wt[0];
	
	int avg=bt[0];
	for(int i=1;i<n;i++){
		wt[i]=tat[i-1];
		tat[i]=bt[i]+wt[i];
		avg=avg+bt[i];
	}
	cout<<"process"<<"  burst time** \t waiting time \t turn around time "<<endl;
	for(int i=0;i<n;i++){
		cout<<"P"<<i<<"\t\t  "<<bt[i]<<"\t  \t"<<wt[i]<<"\t  \t" <<tat[i] <<endl;
	}
	return 0;
}