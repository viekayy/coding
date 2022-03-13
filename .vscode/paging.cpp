#include<iostream>
using namespace std;
void find(int frmno[] , int n){
    int a=0;
    do{
        cout<<"enter the logical address(page no. , offset\n";
        int la;
        int temp;
        
        cin>>la;
        cin>>temp;
        if(la>=n){
            cout<<"lg is not available\n";
        }else{
                if(frmno[la]==-1){
                    cout<<"reqd page is not available in any frame\n";
                }
                else{
                    cout<<"physical address (frame no. ) and offset is :"<<frmno[la]<<"  "<<temp;                
                }
        
        }
        cout<<"\n enter 1 to continue , 0 to exit";
        cin>>a;
    }while(a==1);
}


int main(){
    cout<<"enter number of pages and frames  in memory";
    int n;
    cin>>n;
   
   
    cout<<"enter the page size";
    int psz;
    cin>>psz;

    cout<<"enter the page table as \n enter frame number -1 if page not present in frame\n";
    int frmno[n];
    cout<<"page number \t frame number \n";


    for(int i=0;i<n;i++){
        cout<<i<<"\t\t\t";
        cin>>frmno[i];

    }
    find(frmno,n);

}


