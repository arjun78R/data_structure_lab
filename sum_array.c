#include <stdio.h>
int main()
{
   int arr[50];
   int n,i,sum=0;
   printf("enter the number of elements");
   scanf("%d",&n);
   if(n<=50)
   {
       
       printf("enter the element of array\n");
       for(i=0;i<n;i++)
       {
       
            printf("enter the %d element",i);
            scanf("%d",&arr[i]);
       }
       for(i=0;i<=n;i++)
       {
          sum=sum+arr[i];
        }
         printf("sum of %d elements is: %d\n",n,sum);
   }
   else
   {
         printf("the entered size is larger than any array size\n");
   }
   return 0;
}       
         
