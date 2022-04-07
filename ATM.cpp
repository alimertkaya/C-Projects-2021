#include<stdio.h>

int main() {
	int secim,miktar,bakiye=1000;
	char yeniden='e';
	
	printf("1)Bakiye Sorgulama\n2)Para Yatirma\n3)Para Cekme\n4)Havale Yapma\n");
	
	while(yeniden=='e') {
		printf("Lutfen yapmak istediginiz islemi giriniz:");
	    scanf("%d",&secim);
		
		switch(secim) {
		    case 1: 
		        printf("Bakiyeniz:%d TL",bakiye);
		        break;
		    case 2:
		    	printf("Bakiye:%d TL\n",bakiye);
		    	printf("Yatirmak istediginiz miktari giriniz:");
		    	scanf("%d",&miktar);
		    	bakiye+=miktar;
		    	printf("\nYeni bakiyeniz=%d TL",bakiye);
		    	break;
		    case 3:
		    	printf("Bakiye:%d TL\n",bakiye);
		    	printf("Cekmek istediginiz miktari giriniz:");
		    	scanf("%d",&miktar);
		    	bakiye-=miktar;
		    	printf("\nYeni bakiyeniz=%d TL",bakiye);
		    	break;
		    case 4:
		    	printf("Bakiye:%d TL\n",bakiye);
		    	printf("Lutfen havale yapmak istediginiz miktari giriniz:");
		    	scanf("%d",&miktar);
		    	bakiye-=miktar;
		    	printf("\nHavale sonrasi yeni bakiyeniz=%d TL",bakiye);
		    	break;
		    default :
		        printf("Yanlis bir islem girdiniz!");
		        break;
		}
		printf("\nBaska bir islem yapmak istiyor musunuz? e/h ");
		scanf("%s",&yeniden);
	}
	printf("Kartinizi almayi unutmayin!\nIyi gunler dileriz.");
	return 0;
}
