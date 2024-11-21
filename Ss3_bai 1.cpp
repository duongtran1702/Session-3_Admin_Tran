#include<stdio.h>
#define Mynato 100
int main (){
	char name[Mynato];
	printf("Vui long nhap vao ho ten cua ban :");
	fgets(name,sizeof(name),stdin);
	printf("Xin chao %s",name);
	
}