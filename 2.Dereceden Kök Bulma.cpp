#include<stdio.h>
#include<math.h>

int main() {
	
	int a,b,c;
	float x1,x2;
	float delta;
	
	printf("Denklemde x^2'nin katsayisini giriniz:");
	scanf("%d",&a);
	printf("Denklemde x'in katsayisini giriniz:");
	scanf("%d",&b);
	printf("Denklemde sabit sayiyi giriniz:");
	scanf("%d",&c);
	
	delta=(b*b)-(4*a*c);
	
	x1=(-b+(sqrt(delta)))/2*a;
	x2=(-b-(sqrt(delta)))/2*a;
	
	if(delta>0) {
		printf("2 tane reel kok vardir.x1=%.2f x2=%.2f",x1,x2);
		
	}
	else if(delta==0){
		
		printf("Cakisik kok vardir.x1=x2=%.2f ",x1);
	}
	else{
		printf("Reel kok yoktur.");
	}
	
	
	
	
	
	return 0;
}
