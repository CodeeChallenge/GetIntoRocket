#include <stdio.h>
#include<stdlib.h>

	

	//int comparetor (const void * a, const void * b)
	//{
	//	return ( *(int*)a - *(int*)b );
	//}

int main(void) {
	int t;
	scanf("%d",&t);
	 while(t--)
	 {
	     
	     int n;
	  
	    scanf("%d",&n);
	    
	    int j,a[n];
	    int u=1;
	    for(j=0;j<n;j++)
	    {
	        scanf("%d",&a[j]);
	        
	        if(j>4)
	        {
	         if(a[j-5]>a[j]&&a[j-4]>a[j]&&a[j-3]>a[j]&&a[j-2]>a[j]&&a[j-1]>a[j])
	            {
	                u++;
	            }
	    }
	    }
	        if(a[0]>a[1])
	        {
	            u++;
	            
	        }
	         if(a[0]>a[2]&&a[1]>a[2])
	        {
	            u++;
	        }
	           if(a[0]>a[3]&&a[2]>a[3]&&a[1]>a[3])
	        {
	            u++;
	        }
	           if(a[0]>a[4]&&a[1]>a[4]&&a[2]>a[4]&&a[3]>a[4])
	        {
	            u++;
	        }
	      /*  int j;
	        for(j=5;j<n;j++)
	        {
	            if(a[j-5]>a[j]&&a[j-4]>a[j]&&a[j-3]>a[j]&&a[j-2]>a[j]&&a[j-1]>a[j])
	            {
	                u++;
	            }
	        }*/
	        printf("%d\n",u);
	    
	    
	    
	 }
	    
	    
	    
	    
	   
	return 0;
}
