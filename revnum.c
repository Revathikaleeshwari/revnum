#include<stdio.h>
int main()
{
int i,a[20],n;
printf("Enter number of elements\n");
scanf("%d",&n);
printf("Enter elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("The reverse array is\n");
for(i=n-1;i>=0;i--)
printf("%d\t",a[i]);
return 0;
}
