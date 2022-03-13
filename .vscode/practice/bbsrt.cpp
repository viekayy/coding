#include <iostream>
using namespace std;
void bbsrt(int arr[],int n){
    cout<<"congratulations your sorted elements are as under :";
    for(int i=0;i<n;i++){
        for(int j;j<n-i;j++){
        if(arr[j]<arr[j+1]){
            int temp;
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
        }
    }
}
int main(){int n;
    cout<<"enter the number of elements user want to sort";
    cin>>n;
    cout<<"enter the elements of the array you want to sort:";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bbsrt(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}