import java.util.*;
public class tricks {
    public static void main(String args[]){
        // Scanner sc=new Scanner(System.in);
        // int n=sc.nextInt();
            int n=4;
        for(int i=1;i<=n;i++){
            for(int j=i;j<=n;j++){
                if(i==1||j==n||i==j){
                System.out.print("* ");
                }else{
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }




}
