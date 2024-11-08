#include<stdio.h>
int main()
{
int a[10],b[10],n,m,i,j,mr[20],temp,k=0,s=0;
printf("enter the size of first array series");
scanf("%d",&n);
printf("enter the size of second array series:");
scanf("%d",&m);
printf("\n enter the first array series:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n enter the second array series:");
for(i=0;i<m;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("\n the sorted first series is:");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
for(i=0;i<m-1;i++)
{
for(j=+i+1;j<m;j++)
{
if(b[i]>b[j])
{
temp=b[i];
b[i]=b[j];
b[j]=temp;
}
}
}
printf("\n the sorted second array:");
for(i=0;i<m;i++)
{
printf("%d\t",b[i]);
}
k=0;i=0;j=0;
while(i<n&&j<m)
{
if(a[i]<=b[j])
{
mr[k++]=a[i++];
}
else
{
mr[k++]=b[j++];
}
}
while(i<n)
{
mr[k++]=a[i++];
} 
while(j<m)
{
mr[k++]=b[j++];
}
printf("\n the merged array is\n:");
for(i=0;i<n+m;i++)
{
printf("%d\t",mr[i]);
}
return 0;
}

