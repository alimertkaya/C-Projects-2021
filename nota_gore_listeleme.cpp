#include<stdio.h> 

int main() {
	int A[10],B[10],i,j,k,m;
	
	for(i=0;i<10;i++) {
		printf("%d.ogrencinin numarisini giriniz:",i+1);
		scanf("%d",&A[i]);
		printf("%d.ogrencinin notunu giriniz:",i+1);
		scanf("%d",&B[i]);
	}
	
	for(i=0;i<9;i++) {
		for(j=i+1;j<10;j++) {
			if(A[i]>A[j]) {
				k=A[i]; A[i]=A[j]; A[j]=k;
				m=B[i]; B[i]=B[j]; B[j]=m;
			}
		}
	}
	for(i=0;i<9;i++) {
		for(j=i+1;j<10;j++) {
			if(B[i]>B[j]) {
				k=A[i]; A[i]=A[j]; A[j]=k;
				m=B[i]; B[i]=B[j]; B[j]=m;		
			}
		}
	}
	printf("Numara            Not\n");
	for(i=0;i<10;i++) {
		printf("%3d%17d\n",A[i],B[i]);
	}
	
	
}
