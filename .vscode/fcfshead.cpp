#include <iostream>
using namespace std;
int main(){
    cout<<"enter the memory address required to access";
    int n;
    cin>>n;
    int add[n];
    int st=0;
    int head=0;
    cout<<"enter the current head position";
    cin>>head;
    cout<<"enter the positions";
    for(int i=0;i<n;i++){
        cin>>add[i];
    }
    int prev=head;
    for(int i=0;i<n;i++){
        cout<<"head is moved to position "<<add[i]<<endl;
        st=st+abs(add[i]-prev);
        prev=add[i];
    }
    cout<<"seek time is "<<st;

}