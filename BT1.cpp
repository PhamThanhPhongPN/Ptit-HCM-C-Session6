#include <stdio.h>

int main(){
	int a,b,c,d,e,Sum;
	printf("Hay nhap 5 so nguyen ngay nhien :\n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	if (a %2 != 0){
		Sum = Sum + a;
	} 
	if (b%2 != 0){
		Sum = Sum + b;
	}
	if (c%2 != 0){
		Sum = Sum + c;
	}
	if (d%2 != 0){
		Sum = Sum + d;
	}
	if (e%2 != 0){
		Sum = Sum + e;
	}
	printf("Tong nhung so le ban da nhap la %d",Sum);
	return 0;
}
