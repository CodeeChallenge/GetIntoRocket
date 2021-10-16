//merge and remove duplicates
//find the bug challenge..
#include <stdio.h>
#include <stdlib.h>
int comp(const void* p,const void* q){
	return *(int*)p - *(int*)q;
}

int main(){
	int nums1[]={3,2,4,5};
	int nums2[]={};
	int i = 0, j = 0;
	int size = sizeof(nums1)/sizeof(nums1[0]);
	qsort(nums1,size,sizeof(int),comp);
	for(int k = 0;k < size-1;k++){
		if(nums1[k] != nums1[k+1])
			nums1[i++] = nums1[k];
		
	}
	nums1[i++] = nums1[size - 1];
	 size = sizeof(nums2)/sizeof(nums2[0]);
	qsort(nums2,size,sizeof(int),comp);
	for(int k = 0;k < size-1;k++){
		if(nums2[k] != nums2[k+1])
			nums2[j++] = nums2[k];
	}
	nums2[j++] = nums2[size - 1];
	int nums3[i+j], k =0;
	for(;k<i;k++)
		nums3[k] = nums1[k];
	for(int k1=0;k1<j;k1++)
		nums3[k++] = nums2[k1];
	qsort(nums3,k,sizeof(int),comp);
	int r = 0;
	for(int i = 0; i<k-1; i++){
		if(nums3[i] != nums3[i+1])
			nums3[r++] = nums3[i];
	}
	nums3[r++] = nums3[k-1];
	for(int k1 = 0;k1 < r;k1++){
		printf("%d ",nums3[k1]);
	}
	return 0;
}