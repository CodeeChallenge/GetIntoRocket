#include <stdio.h>
int main(void) {
	int t,i,j,k;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		int n;
		scanf("%d",&n);
		int a[n];
		for(j=0;j<n;j++)
		scanf("%d",&a[j]);
		int c=1;
		for(j=1;j<n;j++)
		{
			int min=751;
			int x=j-5;
			if(x<0)
			x=0;
			for(k=x;k<j;k++)
			{
				if(a[k]<min)
				min=a[k];
			}
			if(min>a[j])
			c++;
		}
		printf("%d\n",c);
	}
	return 0;
}