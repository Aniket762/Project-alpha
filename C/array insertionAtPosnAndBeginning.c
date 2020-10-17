//Array insertion at position and at beginning

#include<stdio.h>
int main(){
	int a[50],size,i,num,pos;
	printf("Enter the size of array:");
	scanf("%d",&size);
	printf("Enter elements of array:\n");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter the element to be inserted:");
	scanf("%d",& num);
	printf("\nEnter the position where you want to insert:");
	scanf("%d",&pos);
	if(pos<=0 || pos>size)
	{
		printf("\nInvalid position.");
	}
	else
	for(i=size-1;i>=pos-1;i--)
	    {
	    	a[i+1]=a[i];
		}
        a[pos-1]=num;
        size++;
    
    printf("\nThe linked list is:");
	for(i=0;i<size;i++){
		printf("%d ",a[i]);
	}

    printf("\nEnter the element to be inserted at beginning:");
	scanf("%d",& num);

	for(i=size-1;i>=0;i--)
	    {
	    	a[i+1]=a[i];
		}
        a[0]=num;
        size++;
        
	printf("\nThe linked list is:");
	for(i=0;i<size;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
