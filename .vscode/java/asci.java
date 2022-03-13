public class asci{
    public static void main(String[] args){
        int n=7;
        print(n);
    }
        static void print(int n){
            
            for(int i=1;i<=n;i++){
                char ch=65;
                for(int j=1;j<=i;j++){
                    System.out.print(ch+" ");
                     ch++;
                }System.out.println();
            }
        }
    }
