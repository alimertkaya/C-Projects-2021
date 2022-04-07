#include<stdio.h>


int main () {
	int ort,top,B[5],i,j;
	float A[5][3];
	for(i=0;i<5;i++) {
		for(j=0;j<3;j++) {
			printf("%d.hastanin %d.olcum degerrini giriniz:",i+1,j+1);
			scanf("%f",&A[i][j]);
		}
	}
	printf("Satir satir hasta olcum matrisinin elemanlari:\n");
	for(i=0;i<5;i++) {
		for(j=0;j<3;j++) {
			printf("%f ",A[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<5;i++) {
		top=0;
		for(j=0;j<3;j++) {
			top=top+A[i][j];
		}
		ort=top/3;
		B[i]=ort;
		printf("%d.hastanin ortalama atesi=%d\n",i+1,B[i]);
	}
	for(i=0;i<5;i++) {
		for(j=0;j<3;j++) {
			if(A[i][j]>B[i]) {
				printf("%d.hastanin %d.olcum degeri ortalamadan buyuktur.\n",i+1,j+1);
			}
		}
	}
	for(i=0;i<3;i++) {
		top=0;
		for(j=0;j<5;j++) {
			top=top+A[j][i];
		}
		ort=top/5;
		printf("%d.olcumdeki degerlerin ortalamasi:%d\n",i+1,ort);
	}
return 0;
}
	

