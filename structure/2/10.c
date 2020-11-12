// 假设 n 个整数存放在数组，现在要让它每个元素向左移动 p 位
// 即 1 2 3 4 5 移动三位为 4 5 1 2 3
// 现在要你设计一个在时间和空间都高效的算法
#include<stdio.h>

void printArr(int* arr,int len){
	for (int i=0;i<len;i++) printf("%d",arr[i]);
	printf("\n");
}

// 两两做交换
void exchange(int* arr,int low,int high){
	int tmp = 0;
	for (int i=0;i<((high-low+1)/2);i++){
		printf("%d\n",i);
		tmp = arr[high-i];
		arr[high-i] = arr[low+i];
		arr[low+i] = tmp;
	}
}

// 先是前面交换，然后后面交换，最后一起交换，就得出结果
// 时间复杂度是O(n/2)+O(p/2)+O(n-p/2)=O(n),空间复杂度是O(1),并且是数组原址操作。
void move(int* arr,int p,int len){
	exchange(arr,0,p-1);
	exchange(arr,p,len-1);
	exchange(arr,0,len-1);
}

int main(){
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int len = sizeof(arr)/sizeof(arr[0]);
	move(arr,4,len);

	printArr(arr,len);
	return 0;
}
