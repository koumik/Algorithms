#include<stdio.h>
#include<conio.h>
int arr[15],max,min;
int max_min(int i,int n)
{
	int mid,max1,min1;
   if(i==n)
   {
   	max=min=arr[i];
   }
   else if(i==n-1)
   {
   	if(arr[i]>=arr[n-1])
      {
      	max=arr[n];
         min=arr[i];
      }
      else
      {
      	max=arr[i];
         min=arr[i];
      }
   }
   else
   {
   	mid=(i+n)/2;
      max_min(i,mid);
      max1=max;  
      min1=min;
      max_min(mid+1,n);
      if(max<max1)
      	max=max1;
      if(min>min1)
      	min=min1;
   }
}
void main()
{
	int n,i;
   printf("Enter the Number of Elements of array : ");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
   	scanf("%d",&arr[i]);
   }
  max_min(0,n-1);
  printf("\nMinimum element is %d",min);
  printf("\nMaximum element is %d",max);
  getch();
}