#include <stdio.h>
int main(){
    
int n=5;
    for(int i=0;i<=n;i++){
        printf("\n");
        for(int j=0;j<=n;j++)
        {
            if(i == n)
            {
                if(j==n)
                    printf("*");
                else
                    printf(" ");
            }
            else{
            if(i+j >= n)
                printf("*");
            else
                printf(" ");
        }
    }
}   
    for(int i=0;i<n;i++){
        printf("\n");
        for(int j=0;j<=2*n-i;j++)
        {
            if(j>i)
                printf("*");
            else
                printf(" ");
        }
    }    
	return 0;
}