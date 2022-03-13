import java.util.*;
public class learnpattern {
    public static void main(String args[]){
        // System.out.println("enter n");
        // Scanner sc=new Scanner(System.in);
        // int n=sc.nextInt();
        int n=4;
        // rows outer
        for(int i=1;i<n;i++){
            // columns inner
            for(int j=i;j<=n;j++){
                    System.out.print("  ");
                }
                for(int k=1;k<=i;k++){
                System.out.print("* ");
            }
                for(int k=1;k<i;k++){
                    System.out.print("* ");
            }
            
            
            System.out.println();
        }
        for(int i=1;i<=n;i++){

          for(int l=1;l<=i;l++){
            System.out.print("  ");
        }
         for(int j=i;j<=n;j++){
                System.out.print("* ");
        }
         for(int j=i;j<n;j++){
            System.out.print("* ");
        }
        System.out.println();
    }   
    }
} 
