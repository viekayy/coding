public class quicksort{
    public static void main(String args[]){
        int[] arr={1,4,2,9};
   public static int partition(int[] arr,low,high){
       int pivot=arr[end];
       int i=low-1;
       int index=st-1;
       for(int j=low;j<=end;j++){
           if(arr[j]<pivot){
               idx++;
               quicksort(arr,i,index);
               quicksort(arr,pivot+1,high)
           }
   }     
        }
        public static void quicksort(arr,int pre,int next){
            for(int i=0;i<arr.length;i++){
                for(int j=1;j<arr.length-1;j++){
                    if(arr[j]>arr[j+1]){
                        int temp;
                        temp=arr[j+1];
                        arr[j+1]=arr[j];
                        arr[j]=temp;
                    }
                }
            }
        }
    }for(int i=0;i<n;i++){
        System.out.print(arr[i]);
    }

