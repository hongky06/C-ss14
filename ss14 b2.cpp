#include<stdio.h>
int main(){
	char arr[] = " I love you ";
	int arrsize = sizeof(arr)/sizeof(char);
	   printf ("them cach la: ");
     	for(int i = 0 ; i < arrsize -1; i++ ){
     		printf("%c ",arr[i]);
		 }
}
