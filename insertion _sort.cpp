#include<stdio.h>
#define MAX 50

void insertionsort(int arr2[],int size2) {
	
	int i,j,element;
	
	for(i=1;i<size2;i++)
	{
		element=arr2[i];
		j=i-1;
		
		while(j>=0 && arr2[j]>element)
		{
			arr2[j+1]=arr2[j];
			j--;
		}
		arr2[j+1]=element;
	}
	
}

int main() {
	
	int i,size,arr[MAX],j;
	
	printf("Size of the array:");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	insertionsort(arr,size);
	
	for(j=0;j<size;j++)
	{
		printf("%d ",arr[j]);
	}
	
	
	return 0;
}
