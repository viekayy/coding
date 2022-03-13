import java.util.*;
public class stars{

   
    public static void main(String args[]){
        int arr[]={1,3,4,5};
        int max=0;
        for(int i=1;i<arr.length;i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        printstar(arr,max); 
    }



     public static void printstar(int[] arr,int max){
        for(int i=max;i>=1;i--){
            for(int j=0;j<arr.length;j++){
                if(arr[j]>=i){
                    System.out.print("*  ");
                }else{
                    System.out.print("   ");
                }
            }System.out.println();
        }
    }
    
}