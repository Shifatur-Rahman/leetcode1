#include<stdio.h>
int main(){

int nums[] = {2,7,11,15}, target = 22;
int i, j, sum=0;

for(i=0;i<4;i++){
	for(j=i+1;j<4;j++){
		sum = nums[i] + nums[j];
		if(sum == target){
			printf("%d %d",i ,j);
		}
	}
}

}
