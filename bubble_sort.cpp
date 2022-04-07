#include<stdio.h>
#define MAX 50

void bubblesort(int arr2[],int size2) {
    
	int i,j,temp;
	
	for(i=0;i<size2;i++)
	{
		for(j=1;j<size2-i;j++)
		{
			if(arr2[j-1]>arr2[j])
			{
				temp=arr2[j];
				arr2[j]=arr2[j-1];
				arr2[j-1]=temp;
			}
		}
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
	
	bubblesort(arr,size);
	
	for(j=0;j<size;j++)
	{
		printf("%d ",arr[j]);
	}
	
	
	return 0;
}
