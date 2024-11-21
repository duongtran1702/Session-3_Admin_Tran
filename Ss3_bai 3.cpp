#include<stdio.h>
int main(){
float pi=3.14;
int r;
printf("Nhap ban kinh r :");
scanf("%d",&r);
float dien_tich=r*r*pi;
float chu_vi=2*r*pi;
printf("Dien tich hinh tron voi ban kinh %d la:%.2f",r,dien_tich);
printf("\nChu vi hinh tron voi ban kinh %d la:%.2f",r,chu_vi);
	return 0;
}