#include<stdio.h>

int main() {
	
	int a,b,c;
	int mindeger;
	
	printf("Lutfen birinci sayiyi giriniz:");
	scanf("%d",&a);
	printf("Lutfen ikinci sayiyi giriniz:");
	scanf("%d",&b);
	printf("Lutfen ucuncu sayiyi giriniz:");
	scanf("%d",&c);
	
	if(a<b){
		mindeger=a;
	}
	else{
		mindeger=b;
	}
	
	if(c<mindeger){
		mindeger=c;
	}
	
	printf("En kucuk sayi:%d",mindeger);
	
	
	
	
	
	
	
	
	return 0;
}
