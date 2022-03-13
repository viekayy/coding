#include <iostream> 
using namespace std;

void worstfit(int ps[],int ms[],int n){
   for(int i=0;i<n;i++){
       for(int j=0;j<n-i-1;j++){
           if(ms[j]<ms[j+1]){
               int temp=ms[j+1];
               ms[j+1]=ms[j];
               ms[j]=temp;
           }
           if(ps[j]>ps[j+1]){
               int temp=ps[j+1];
               ps[j+1]=ps[j];
               ps[j]=temp;
           }
       }
   }
    cout<<"process number\t process memory\t memory allocated \n";
    for(int i=0;i<n;i++){
        int temp=0;
        if(ms[i]>ps[i]){
            temp=ms[i];
         
        }
        cout<<"p"<<i<<"\t"<<ps[i]<<"\t\t"<<ms[i]<<"\n"; // doubt
    }
//    cout<<"\n";
//    for(int i=0;i<n;i++){
//        cout<<ms[i]<<" ";
//    }
//    cout<<"\n";
//    for(int i=0;i<n;i++){
//        cout<<ps[i]<<" ";
//    }
}
void bestfit(int ps[],int ms[],int n){
   for(int i=0;i<n;i++){
       for(int j=0;j<n-i-1;j++){
           if(ms[j]<ms[j+1]){
               int temp=ms[j+1];
               ms[j+1]=ms[j];
               ms[j]=temp;
           }
           if(ps[j]<ps[j+1]){
               int temp=ps[j+1];
               ps[j+1]=ps[j];
               ps[j]=temp;
           }
       }
   }
    cout<<"process number\t process memory\t memory allocated \n";
        int mea[n];
    for(int i=0;i<n;i++){
        int temp=0;
        for(int j=0;j<n;j++){
            if(ms[j]==ps[i] || ms[j]!=0 && ps[i]<=ms[j]){
                temp=ms[j];
                ms[j]=0;
                break;
            }
        
        }
        mea[i]=temp;
        if(ms[i]>ps[i]){
            temp=ms[i];
         
        }
        cout<<"p"<<i<<"\t"<<ps[i]<<"\t\t"<<ms[i]<<"\t\t"<<mea[i]<<"\n"; // doubt
    }
//    cout<<"\n";
//    for(int i=0;i<n;i++){
//        cout<<ms[i]<<" ";
//    }
//    cout<<"\n";
//    for(int i=0;i<n;i++){
//        cout<<ps[i]<<" ";
//    }
}


int main(){
    cout<<"enter the process number";
    int n;
    cin>>n;
    int ps[n],ms[n];


    for(int i=0;i<n;i++){
        cout<<"enter memory size of block "<<i+1;
        cin>>ms[i];
    }


    for(int i=0;i<n;i++){
        cout<<"enter process size "<<i+1;
        cin>>ps[i];
    }
    // worstfit(ps,ms,n);
    bestfit(ps,ms,n);
}
