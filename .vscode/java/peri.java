import java.util.*;
public class peri{
    public static void main(String args[]){
        System.out.println("enter the number");
        Scanner sc=new Scanner(System.in);
        int n = sc.nextInt();
        for(int i=1;i<=n;i++){
            
                for(int l=1;l<=n-i;l++ ){
                    System.out.print(" ");
            }
            for(int j=1;j<=i;j++){
                
                System.out.print(" "+i);
            }

            System.out.println();
        }
    }
       
    }
    

        
    