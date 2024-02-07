
#include <stdio.h>

int main() {
 
    int n,i,j;
    n=9;
    for(i=0;i<n;i++){
        for(j=i;j<n-1;j++)
            printf(" ");
        
        for(j=i;j>=0;j--)
            printf("%d",j);
            
        
        for(j=0;j<=i;j++)
            printf("%d",j);
        
        
        printf("\n");
    }
    for(i=n-2;i>=0;i--){
        for(j=i;j<=n-2;j++)
            printf(" ");
        
        for(j=i;j>=0;j--)
            printf("%d",j);
            
        
        for(j=0;j<=i;j++)
            printf("%d",j);
            
        
        for(j=i;j<n-1;j++)
            printf(" ");
           
        printf("\n");
    }
    n=10;
    char c = '*';
    for(i=0;i<n/2;i++){
        for(j=i;j<(n/2)-1;j++){
            printf(" ");
        }for(j=2*i+1;j>0;j--){
            printf("%c",c);
        }
            printf("\n");
    }
    
  /* for(i=1;i<n/2;i++){
        for(j=i;j>0;j--)
            printf(" ");
        if(n%2==0){
        for(j=n-2*i;j>1;j--)
            printf("%c",c);
        }else{
            for(j=n-2*i;j>2;j--)
            printf("%c",c);
            }
        printf("\n");
        
    }
    */
  
    return 0;
}
