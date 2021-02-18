#include<stdio.h>
#include<conio.h>
void main()
{
int arr[100],size,i,j,num;

clrscr();

printf("Enter size of array=");
scanf("%d",&size);

printf("\nEnter %d values\n",size);

	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}

	for(i=0;i<size;i++)
	{
		num=arr[i];
		for(j=size-1;j>i;j--)
		{
			if(num==arr[j])
			{
				 arr[j] = -1;
			}

		}
	}

printf("\n\n");

	for(j=0;j<size;j++)
	 {
		printf("%d\n",arr[j]);
	 }
getch();

}
