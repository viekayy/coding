#include<iostream>
using namespace std;
int factvk(int n){
    double a=1;
    if(n<=1) return 1;
    a=n*factvk(n-1);
    return a;
}
int main(){
    int temp=factvk(20);
    cout<<temp<<"\n n";
    return 0;
}