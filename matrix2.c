#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(!(n%2)==0)
        {
        	printf("NO");
        	return 0;
        }
    int A[n][n];
	for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&A[i][j]);    
    int B[n],x=0;
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n/2;j++)
    	{
    		B[x]=A[i][j];
    		x++;
    	}
    }
    for(int i=0;i<n;i++)
    {
    	for(int j=n-1;j>=n/2;j--)
    	{
    		B[x]=A[i][j];
    		x++;
    	}
    }
    int count=0;
     for(int i=0;i<n+n;i++)
    	{
    		if(B[i]==B[((n*n)/2)+i])
    			count++;
    	}
    	if(count==n+n)
    		printf("YES");
    	else
    		printf("NO");
    return 0;
}