#include <stdio.h>

int main(){
	int Password, Guess;
	Password = 69420;
	printf("Hay nhap mat khau cua ban (mat khau co 5 so) : ");
	scanf("%d",&Guess);
	while (Guess != Password){
		printf("Mat khau khong hop le!\n");
		printf("Hay nhap lai mat khau cua ban (mat khau co 5 so) : ");
		scanf("%d",&Guess);
	}
	printf("Mat khau dung roi!\n");
	printf("Xin chao ban.");
	return 0;
}
