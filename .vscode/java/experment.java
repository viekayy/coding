import java.util.*;
public class experment{
    
     static void printarr(int[] arr){
        for(int i=0;i<arr.length;i++){
            System.out.println("values entered are :"+arr[i]);
        }
    }
 static void enter(int[] arr){

        for(int i=0; i<arr.length;i++){
             arr[i]=sc.nextInt();
        }
   
 }
 static Scanner sc=new Scanner(System.in);

    public static void main(String args[]){
        System.out.print("enter the size of array");
    

        int n=sc.nextInt(); 
        int arr[]=new int[n];

       enter(arr);
       printarr(arr);
    } 
}