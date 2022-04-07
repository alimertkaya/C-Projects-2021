#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	int kackez=1,sayi,tahmin;
	
	srand(time(NULL));
	sayi=1+rand()%100;
	printf("Tahmin ettigim sayiyi bulabilecek misin?\nTahminin:");
	scanf("%d",&tahmin);
	
	while(sayi!=tahmin) {
		if(tahmin<sayi) {
			printf("Yanlis Tahmin! Daha buyuk bir sayi tahmin etmeliydin.\nYeni tahminin:");
			scanf("%d",&tahmin);
			kackez++;
		}
		if(tahmin>sayi) {
			printf("Yanlis Tahmin! Daha kucuk bir sayi tahmin etmeliydin.\nYeni tahminin:");
			scanf("%d",&tahmin);
			kackez++;
		}
		if(tahmin==sayi) {
			printf("Tebrikler %d seferde buldunuz.",kackez);
		}
	}
	printf("Tebrikler %d sayisini %d. seferde bildiniz!",sayi,kackez);
	return 0;
}

