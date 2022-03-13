import java.util.*;
public class insertion{
    public static void printarr(int arr[]){
        for(int i=0;i<arr.length;i++){
            System.out.println("arrays are : "+arr[i]);
        }
    }
    public static void main(String args[]){
        System.out.println("the specified array elements are: 99 88 77 66");
        int arr[]={99,88,77,66};
        for(int i=0;i<arr.length-1;i++){
            for(int j=0;j<arr.length-i-1;j++){
                if(arr[j]>arr[j+1]){
                 int temp;
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;                    
                }
            }
        }printarr(arr);
    }
}