#include<stdio.h>

int main(){
	float math_score,literature_score,english_score;
	printf("Moi ban nhap diem toan :");
	scanf("%f",&math_score);	
	printf("Moi ban nhap diem van :");
	scanf("%f",&literature_score);
	printf("Moi ban nhap diem anh :");
	scanf("%f",&english_score);
	float total_score,average_score;
	total_score=math_score+literature_score+english_score;
	average_score=total_score/3;
	printf("Tong diem 3 mon la :%.2f\n",total_score);
	printf("Diem trung binh 3 mon la :%.2f",average_score);
}