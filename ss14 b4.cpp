#include<stdio.h>
int main(){
	char arr [50]="hello thay";
	char a;
	int b=0;
	int length = sizeof(arr)/sizeof(char);
	printf("hay nhap ki tu: ");
	scanf("%c",&a);
	for(int i= 0; i < length -1 ; i++ ){
		if (a == arr[i]){
			b++;
		}else{
			printf("\n ko co phan tu nao");
			break;
		}
	}
        printf("\n so luong la: %d ",b);
return 0;
}
