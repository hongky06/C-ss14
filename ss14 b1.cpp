#include<stdio.h>
#include<string.h>
int main(){
	char arr[50];
	printf("hay nhap mot chuoi ki tu: " );
	fgets(arr,50,stdin);
	printf("chuoi ki tu la: %s",arr);
	printf("so luong ki tu la: %d\n", strlen(arr));

	return 0;
}
