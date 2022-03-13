 public class repe {
     public static void main(String args[]){
         int[] arr={4,7,1,2,2,9,3,8};
         int j=arr.length-1;
         int n=arr.length/2;
         int max=arr[0];
         int min=arr[0];
         while(n>=0){
             
             if(arr[n]>max) max=arr[n];
             if(arr[j-n]>max) max=arr[j-n];
             if(arr[n]<max) min=arr[n];
             if(arr[j-n]<max) min=arr[j-n];
             n--;
         }
        System.out.print(max);
         
     }
 }