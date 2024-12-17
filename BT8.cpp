#include <stdio.h>

int main(){
	float Start,Lai,MoneyLai,MoneyGet;
	int month;
	printf("Hay nhap so tien ban dau : ");
	scanf("%f",&Start);
	printf("Hay nhap lai suat moi thang theo phan tram : ");
	scanf("%f",&Lai);
	printf("Hay nhap so thang gui : ");
	scanf("%d",&month);
	Lai = Lai / 100;
	for (int i = 1; i <= month; i++){
		MoneyLai = (Start*Lai)*(float)i;
		MoneyGet = (Start + MoneyLai);
	}
	printf("Tien lai : %.2f\n",MoneyLai);
	printf("Tien nhan duoc : %.2f",MoneyGet);
	return 0;
}
