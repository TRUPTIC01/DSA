#include<stdio.h>
int main()
{ 
	int i,n;
	int a[n];
	int min,max;
	min=max=0;

	printf("Enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter the elements of array\n");
	for(i=0;i<n;i++)
	{ 
		scanf("%d",&a[i]);
	} 

	//MINIMUM AND MAXIMUM
	min=max=a[0];
	for(i=1;i<n;i++)
	{ 
		if(a[i]>max)
	        max=a[i];
		if(a[i]<min)
		min=a[i];
	} 

	printf("minimum =%d\n",min);
	printf("maximum =%d\n",max);

	return 0;
}
