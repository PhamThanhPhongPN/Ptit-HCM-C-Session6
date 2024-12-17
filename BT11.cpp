#include <stdio.h>
#include <math.h>

bool IsNumPrime(int Num){
	if (Num < 2) return false;
	for (int i = 2; i <= sqrt(Num);i++){
		if (Num % i == 0) return false;
	}
	return true;
}

int main(){
	int Num,Count,List;
	printf("Hay nhap bao nhieu so nguyen to ma ban muon biet : ");
	scanf("%d",&Num);
	Count = 2;
	while (List < Num +1){
		if (IsNumPrime(Count)){
			printf("%d ",Count);
			List++;
		}
		Count++;
	}
	return 0;
}
