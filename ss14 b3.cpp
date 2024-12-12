#include<stdio.h>
#include<string.h>
int main(){
	char arr[50] = "ahihi ";
	int length = strlen(arr);
	printf("sau khi dao nguoc la: ");
    	for(int i = length-1 ; i >=0; i--){
    		printf("%c",arr[i]);
		}



	return 0;
}
