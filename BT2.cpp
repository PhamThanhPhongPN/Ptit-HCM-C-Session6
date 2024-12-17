#include <stdio.h>

int main(){
	int a,b,c,d,e,Even = 0,Odd = 0;
	printf("Hay nhap 5 so nguyen ngay nhien :\n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	if (a %2 == 0){
		Even++;
	} else {
		Odd++;
	}
	if (b %2 == 0){
		Even++;
	} else {
		Odd++;
	}
	if (c %2 == 0){
		Even++;
	} else {
		Odd++;
	}
	if (d %2 == 0){
		Even++;
	} else {
		Odd++;
	}
	if (e %2 == 0){
		Even++;
	} else {
		Odd++;
	}
	printf("Co %d so Chan va %d so Le!",Even,Odd);
	return 0;
}
