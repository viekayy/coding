#include <iostream>
using namespace std;
int main(){
    cout<<"enter number of files you want to enter";
    int n;
    cin>>n;

    int arr[n] , stad[n];
    string brr[n];


    for(int i=0;i<n;i++){
        cout<<"enter file name and file size "<<endl;
        cin>>brr[i];
        // cout<<"lol";
        cin>>arr[i]; 
    }

int ptr=0;
for(int i=0;i<n;i++){
    stad[i]=ptr;
    ptr=ptr+arr[i]+1;
}

    cout<<"file name\t file size \t Starting addres\n";
    int temp=0;
    // cout<<brr[0]<<"\t\t"<<arr[0]<<"\t\t"<<temp<<endl;
    for(int i=0;i<n;i++){
        cout<<brr[i]<<"\t\t"<<arr[i]<<"\t\t"<<stad[i]<<endl;
        temp=temp+arr[i];
    }
    return 0;
}
