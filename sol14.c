//prime factors of number n
#include <stdio.h>
int prime_memo(int n);
int main(){
	int n;
	int save[5];
	int ptr=0;
	scanf("%d",&n);
	while(n>1){
		int i=2;
		while(i<=n)
			{
				if(prime_memo(i))
					if(n%i==0)
						{
							save[ptr]=i;
							ptr++;
							n=n/i;
							break;
						}
				i++;
			}
	}
	//if (save has 3 values or more) and (no repeating).
	int g=0;
	if(ptr>=3)
	{
		for(int i=0;i<ptr;i++)
		{
			g=0;
			for(int j=0;j<ptr;j++)
				if(save[i]==save[j])
					g++;
			if(g==1)
				printf("%d ",save[i]);
		}
	}
	return 0;
}
int prime_memo(int n){
	if(n==1)
		return 0;
	else if(n==2)
		return 1;
	else{
		for(int i=2;i<n;i++)
			if(n%i==0)
				return 0;
		return 1;	
	}
}