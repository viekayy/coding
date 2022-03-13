public class ii{
    public static void main(String args[]){
        int[] arr={4,0,3,2,1};
        int[] ans=new int[5];
        int p=3;
        int i;

        inversePlace(arr,ans);
        displayArray(ans);
        

    public static void inversePlace(int[] arr, int[] ans){
        for(int x=0;x<arr.length;x++){
            
        for(int i=0;i<p;i++){
            int temp;
             temp=arr[i];
             ans[temp]=i;

        
            }
    }
    }
    public static void displayArray(int[] arr){
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
    }
    }
