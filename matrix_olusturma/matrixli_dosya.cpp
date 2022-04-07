#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void fonk1();
void fonk2();
void fonk3();

int main() {
	
	int s,a=1;
	while(a==1)
	{
	printf("Yeni bir matris olusturmak icin 1 giriniz...\n");
	printf("Matrisi yazdirmak icin 2 giriniz...\n");
	printf("Matrisin en buyuk elemanini icin 3 giriniz...\n");
	scanf("%d",&s);
	if(s==1) fonk1();
	if(s==2) fonk2();
	if(s==3) fonk3();
	printf("Baska islem varsa 1,yoksa 2 giriniz...\n");
	scanf("%d",&a);
	} 
	
	return 0;
}

void fonk1() {
	
	int i,j,x;
	srand(time(0));
	FILE *filep=fopen("matris.txt","w");
	
	if(filep==NULL)
	{
		printf("Dosya olusturulamadi...\n");
	}
	else 
	{
		for(i=0;i<10;i++)
		{
			for(j=0;j<10;j++)
			{
				x=rand()%100+1;
				fprintf(filep,"%4d",x);
			}
			fprintf(filep,"\n");
		}
		fclose(filep);
	}
	printf("Matris olusturuldu.\n");
}

void fonk2() {
	
	int i,j,x;
	FILE *filep=fopen("matris.txt","r");
	
	if(filep==NULL)
	{
		printf("Dosya okumadi...\n");
	}
	else 
	{
		printf("\n		Dosyadaki Matris		\n");
		printf("**************************************\n");
		for(i=0;i<10;i++)
		{
			for(j=0;j<10;j++)
			{
				fscanf(filep,"%d",&x);
				printf("%4d",x);
			}
			fprintf(filep,"\n");
		}
		fclose(filep);
	}
	printf("\nMatris yazdirildi.\n");
}

void fonk3() {
	
	int i,j,x,enb;
	FILE *filep=fopen("matris.txt","r");
	
	if(filep==NULL)
	{
		printf("Dosya okunamadi...\n");
	}
	else 
	{
		for(i=0;i<10;i++)
		{
			for(j=0;j<10;j++)
			{
				fscanf(filep,"%4d",&x);
				if((i==0)&&(j==0)) enb=x;
				if(x>enb) enb=x;
			}
		}
		fclose(filep);
	}
	printf("Matrisin en buyuk elemani %d\n",enb);
}
