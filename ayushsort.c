#include <stdio.h> 
#include <time.h>
void mysort(int A[],int l, int h);
void swap(int ,int );
int main() 
{ 
int m;
    scanf("%d",&m);
    int A[m]; 
    for(int i=0;i<m;i++)
        scanf("%d",&A[i]);
    int n = sizeof(A) / sizeof(A[0]); 
    double mytime;
    int start,end;
    start=clock();
    mysort(A, 0, n - 1); 
    end=clock();
    mytime=((double)(end-start))/CLOCKS_PER_SEC;
    printf("\n%d",mytime);
   return 0; 
} 
void mysort(int A[], int l, int h) 
{ 
    if (A[l] > A[h]) 
        swap(A[l], A[h]); 
    if (h - l + 1 > 2) { 
        int t = (h - l + 1) / 3; 
        mysort(A, l, h - t); 
        mysort(A, l + t, h); 
    } 
} 
void swap(int i,int j)
{
    int t;
    t=i;
    i=j;
    j=t;
}
//https://hr-testcases-us-east-1.s3.amazonaws.com/49/input11.txt?AWSAccessKeyId=AKIAJ4WZFDFQTZRGO3QA&Expires=1548857791&Signature=porK0Kr%2B3eiEW2dysMkosZ59GkU%3D&response-content-type=text%2Fplain
