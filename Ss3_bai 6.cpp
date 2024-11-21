#include<stdio.h>
int main(){
	printf("Nhap chieu cao :");
	float height;
	float bottom_edge;
	scanf("%f",&height);
	printf("Nhap do dai canh day :");
	scanf("%f",&bottom_edge);
	float area=0.5*height*bottom_edge;
	printf("Dien tich tam giac la :%.2f",area);
}