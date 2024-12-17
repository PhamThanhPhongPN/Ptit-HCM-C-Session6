#include <stdio.h>

int main(){
	int Num,a=0,b=1,Sum;
	printf("Hay nhap mot so nguyen duong bat ky : ");
	scanf("%d",&Num);
	printf("%d %d ",a,b);
	for(int i = 1;i<Num;i++){
		Sum = a + b;
		printf("%d ",Sum);
		a=b;
		b=Sum;
	}
	return 0;
}
