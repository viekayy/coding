#include<iostream>
#include<conio.h>
using namespace std;


int main(){

    int n;
    cout<<"enter";
    cin>>n;
    int row=1;
    while(row<=n){
        int column=1;
    int count=row;
        while(column<=row){
            cout<<row-column+1;
            column++; 
            count++;
            
        }
        
        row++;
    cout<<endl;
    }
}