#include <stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t){
        int N,K,s=0;
        scanf("%d%d",&N,&K);
        int nums[N];
        for(int i=0;i<N;i++)
            scanf("%d",&nums[i]);
    int sum = 0;
    for(int i=0;i<N;i++){
        sum += nums[i];
        sum -= K;
        
        if(sum < 0){
            s = 1;
            printf("NO %d\n",i+1);
            break;
        }
    }
    if(s == 0)
        printf("YES\n");
    t--;
    }
    return 0;
}