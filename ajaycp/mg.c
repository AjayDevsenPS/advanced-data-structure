#include<stdio.h>
int main()
{
int a[20],b[20],c[40],i,j,k,n,m;
printf("Enter the limit of first sorted array");
scanf("%d",&n);
printf("Enter the elements \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n Enter the limit of the second sorted array");
scanf("%d",&m);
printf("Enter the elements \n");
for(j=0;j<m;j++)
{
scanf("%d",&b[j]);
}
i=0;
j=0;
k=0;
while(i<n && j<m)
{
	if(a[i]<b[j])
	{
		c[k]=a[i];
		k++;
		i++;
	}
	else
	{
		c[k]=b[j];
		k++;
		j++;
	}
}
while(i<n)
{
c[k]=a[i];
i++;
k++;
}
while(j<m)
{
c[k]=b[j];
k++;
j++;
}
printf("\n The new merged array is\n");
for(k=0;k<(m+n);k++)
{
printf(" %d",c[k]);
}
return 0;
}

