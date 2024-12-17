#include <stdio.h>
#include <math.h>

int main(){
	float a,b,c,x1,x2,delta;
	printf("Hay nhap gia tri a,b,c\n");
	scanf("%f%f%f",&a,&b,&c);
	if (a == 0){
		x1 = (-c/b);
		printf("Nghiem cua phuong trinh la x = %.2f",x1);
	} else {
		delta = b*b - 4*a*c;
		if (delta < 0){
			printf("Phuong trinh vo nghiem!");
		} else if (delta == 0){
			x1 = (-b) / 2*a;
			printf("Phuong trinh co nghiem kep x1 = x2 = %.2f",x1);
		} else if (delta > 0){
			x1 = ((-b) + sqrt(delta)) / 2*a;
			x2 = ((-b) - sqrt(delta)) / 2*a;
			printf("Phuong trinh co 2 nghiem phan biet x1 = %.2f va x2 = %.2f",x1,x2);
		}
	}
	return 0;
}
