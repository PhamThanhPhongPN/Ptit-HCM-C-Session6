#include <stdio.h>

int main(){
	int day,month;
	printf("Hay nhap ngay sinh cua ban : ");
	scanf("%d",&day);
	printf("Hay nhap thang sinh cua ban : ");
	scanf("%d",&month);
	switch (month){
		case 1:
			if (day < 20){
				printf("Ban cung Ma Ket");
			} else if (day < 0 || day > 31){
				printf("So ngay khong hop le");
			} else {
				printf("Ban cung Bao Binh");
			}
			break;
		case 2:
			if (day < 19){
				printf("Ban cung Bao Binh");
			} else if (day < 0 || day > 29){
				printf("So ngay khong hop le");
			} else {
				printf("Ban cung Song Ngu");
			}
			break;
		case 3:
			if (day < 21){
				printf("Ban cung Song Ngu");
			} else if (day < 0 || day > 31){
				printf("So ngay khong hop le");
			} else {
				printf("Ban cung Bach Duong");
			}
			break;
		case 4:
			if (day < 21){
				printf("Ban cung Bach Duong");
			} else if (day < 0 || day > 30){
				printf("So ngay khong hop le");
			} else {
				printf("Ban cung Kim Nguu");
			}
			break;
		case 5:
			if (day < 21){
				printf("Ban cung Kim Nguu");
			} else if (day < 0 || day > 31){
				printf("So ngay khong hop le");
			} else {
				printf("Ban cung Song Tu");
			}
			break;
		case 6:
			if (day < 22){
				printf("Ban cung Song Tu");
			} else if (day < 0 || day > 30){
				printf("So ngay khong hop le");
			} else {
				printf("Ban cung Cu Giai");
			}
			break;
		case 7:
			if (day < 23){
				printf("Ban cung Cu Giai");
			} else if (day < 0 || day > 31){
				printf("So ngay khong hop le");
			} else {
				printf("Ban cung Su Tu");
			}
			break;
		case 8:
			if (day < 23){
				printf("Ban cung Su Tu");
			} else if (day < 0 || day > 31){
				printf("So ngay khong hop le");
			} else {
				printf("Ban cung Xu Nu");
			}
			break;
		case 9:
			if (day < 23){
				printf("Ban cung Xu Nu");
			} else if (day < 0 || day > 30){
				printf("So ngay khong hop le");
			} else {
				printf("Ban cung Thien Binh");
			}
			break;
		case 10:
			if (day < 24){
				printf("Ban cung Thien Binh");
			} else if (day < 0 || day > 31){
				printf("So ngay khong hop le");
			} else {
				printf("Ban cung Bo Cap");
			}
			break;
		case 11:
			if (day < 23){
				printf("Ban cung Bo Cap");
			} else if (day < 0 || day > 30){
				printf("So ngay khong hop le");
			} else {
				printf("Ban cung Nhan Ma");
			}
			break;
		case 12:
			if (day < 20){
				printf("Ban cung Nhan Ma");
			} else if (day < 0 || day > 31){
				printf("So ngay khong hop le");
			} else {
				printf("Ban cung Ma Ket");
			}
			break;
	}
	return 0;
}
