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
    for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(bt[j]>bt[j+1]){
                    int temp=bt[j];
                    bt[j]=bt[j+1];
                    bt[j+1]=temp;
                }


                
            }
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