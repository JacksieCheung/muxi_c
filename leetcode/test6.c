#include<stdio.h>

char * longestCommonPrefix(char ** strs, int strsSize){
    static char array[100]={""};
    int i;
    for(i=0;i<strsSize;i++){
            if(strs[0][i]==strs[1][i]&&strs[1][i]==strs[2][i]){
                array[i]=strs[0][i];
            } 
    }
    return array;
}

int main(){
	int i;
	char array[3][128];
	char a[100];
	puts("请输入三个字符串");
	for(i=0;i<3;i++){
		scanf("%s",array[i]);
	}
	printf("%s",longestCommonPrefix(&array));
	return 0;
}
	

