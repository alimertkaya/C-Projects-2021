#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	int T=1,K=2,M=3,i,oyuncu=0,bilgisayar=0,secim;
	srand(time(NULL));
	printf("Tas=1, Kagit=2, Makas=3\n");
	
	for(i=0;i<5;i++) {
		printf("Seciminizi girin:");
		scanf("%d",&secim);
		bilgisayar=1+rand()%3;
		if(secim==1) {
			if(bilgisayar==1) {
				printf("Berabere bitti!\n");
			}
			if(bilgisayar==2) {
				printf("Bilgisayar kazandi!\n");
				bilgisayar=bilgisayar+1;
			}
			if(bilgisayar==3){
				printf("Oyuncu kazandi!\n");
				oyuncu=oyuncu+1;
			}
		}
		else if(secim==2) {
			if(bilgisayar==1) {
				printf("Oyuncu kazandi!\n");
				oyuncu=oyuncu+1;
			}
			if(bilgisayar==2) {
				printf("Berabere bitti!\n");
			}
			if(bilgisayar==3){
				printf("Bilgisayar kazandi!\n");
				bilgisayar=bilgisayar+1;
			}
		}
		else if (secim==3 ){
			if(bilgisayar==1) {
				printf("Bilgisayar kazandi!\n");
				bilgisayar=bilgisayar+1;
			}
			if(bilgisayar==2) {
				printf("Oyuncu kazandi!\n");
				oyuncu=oyuncu+1;
			}
			if(bilgisayar==3){
				printf("Berabere bitti!\n");
			}
		}
		else {
			printf("Hatali giris yaptiniz.\n");
		}
	}
	
	if(bilgisayar>oyuncu) {
		printf("Bilgisayar kazandi! %d e %d",bilgisayar,oyuncu);
	}
	else if(oyuncu>bilgisayar) {
		printf("Oyuncu kazandi! %d e %d",oyuncu,bilgisayar);
	}
	else {
		printf("Kazanan yok berabere bitti!");
	}
	
	return 0;
}
