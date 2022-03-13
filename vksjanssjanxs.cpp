#include <iostream>

using namespace std;

void insertionsort(int arr[],int l){
    
    for(int i=0;i<l-1;i++){
        
        
        
        while{
            
            if(arr[i+1]<arr[i]){
                
                int temp=arr[i+1];
                arr[i+1]=arr[i+1-1];
                arr[i+1-1]=temp;
                i+1;
            }
            else
                break;
            
        }
        
    }
    
}

int main()
{
    int array[]={5,4,3,2,1};
    int l=5;
    
    insertionsort(array,l);
    
    for(int i=0;i<l;i++)
        cout<<array[i]<<", ";
        
    return 0;
}
