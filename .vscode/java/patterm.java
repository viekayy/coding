public class patterm{
    public static void main(String[] args){
        int n=5;
        int spc=n/2;
        int str=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=spc;j++){
                System.out.print("  ");
            }
            int count=1;
            for(int j=1;j<=str;j++){
                System.out.print(count+++" ");
            }
            System.out.println();

            if(i<(n+1)/2){
                 spc--;
                str+=2;
            }else{
                 spc++;
                str-=2;
            }
        }
    }
}