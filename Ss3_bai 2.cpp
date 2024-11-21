#include<stdio.h>
 int main(){
 	printf("Moi ban nhap vao do Celsius:");
 	float celsius;
 	scanf("%f",&celsius);
 	float fahrenheit=celsius*1.8+32;
 	printf("Nhiet so Fahrenhei la :%.2f",fahrenheit);
 }