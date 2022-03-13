#include <iostream> 

using namespace std;
 
int main() 
{ 
	int bt[20], wt[20], tat[20], i, n; 
	float wtavg, tatavg; 

	cout<<"\nEnter the number of processes -- "; 
	cin>>n; 

	for(i=0;i<n;i++) 
	{ 
		cout<<"\nEnter Burst Time for Process -- "<< i <<" : " ; 
		cin>>bt[i]; 
	}

    int sort(){
        
    } 

	wt[0] = wtavg = 0; 
	tat[0] = tatavg = bt[0]; 

	for(i=1;i<n;i++) 
	{ 
		wt[i] = wt[i-1] +bt[i-1]; 
		tat[i] = tat[i-1] +bt[i]; 
		wtavg = wtavg + wt[i]; 
		tatavg = tatavg + tat[i]; 
	} 
	
	cout<<"\n PROCESS \BURST TIME \t WAITING TIME\t TURNAROUND TIME\n";

	for(i=0;i<n;i++) 
	cout<<"\t "<<i<<"\t "<< bt[i]<<"\t "<< wt[i]<<"\t "<<tat[i]<<endl;
 
	cout<<"\nAverage Waiting Time -- "<< wtavg<<endl; 
	cout<<"\nAverage Turnaround Time --"<< tatavg<<endl; 
	

	return 0;
}