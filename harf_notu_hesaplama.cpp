#include<stdio.h>

int main() {
	
	int vize1,vize2,final;
	float dersort,ort;
	
	printf("1.Vize notunu giriniz:");
	scanf("%d",&vize1);
	printf("2.Vize notunu giriniz:");
	scanf("%d",&vize2);
	printf("Final notunu giriniz:");
	scanf("%d",&final);
	printf("Universite ortalamanizi giriniz:");
	scanf("%f",&ort);
	
	dersort=(vize1*3/10.0 + vize2*3/10.0 + final*4/10.0);
	
	if(dersort>=90) {
		printf("Harf Notunuz - AA ve Ders Ortalamaniz: %f",dersort);
	}
	else if(dersort>=85 && dersort<90) {
		printf("Harf Notunuz - BA ve Ders Ortalamaniz: %f",dersort);
	}
	else if(dersort>=80 && dersort<85) {
		printf("Harf Notunuz - BB ve Ders Ortalamaniz: %f",dersort);
	}
	else if(dersort>=75 && dersort<80) {
		printf("Harf Notunuz - CB ve Ders Ortalamaniz: %f",dersort);
	}
	else if(dersort>=70 && dersort<75) {
		printf("Harf Notunuz - CC ve Ders Ortalamaniz: %f ",dersort);
		if(ort<2.5) {
			printf("Dersi tekrar alman yararli olur cunku ortalaman dusuk");
		}
	}
	else if(dersort>=65 && dersort<70) {
		printf("Harf Notunuz - DC ve Ders Ortalamaniz: %f ",dersort);
		if(ort<2.5) {
			printf("Dersi tekrar alman yararli olur cunku ortalaman dusuk");
		}
	}
	else if(dersort>=60 && dersort<65) {
		printf("Harf Notunuz - DD ve Ders Ortalamaniz: %f ",dersort);
		if(ort<2.5) {
			printf("Dersi tekrar alman yararli olur cunku ortalaman dusuk");
		}
	}
	else{
		printf("Dersten kaldiniz.");
	}

return 0;	
}
