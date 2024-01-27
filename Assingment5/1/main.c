
#include<stdio.h>

int main()
{
    int a,n,i,j;
    int num[1000];
    printf("Enter The number of elements of the array\n ");
    scanf("%d",&n);
    printf("Enter The elements of the array\n ");
    for(i=0;i<n;++i) {
        scanf("%d",&num[i]);
    }
    for (i = 0; i < n; ++i){
    for (j = i + 1; j < n; ++j){
      if (num[i] > num[j]){
         a = num[i];
         num[i] = num[j];
         num[j] = a;
      }
   }
}
    printf("The array sorted\n ");
    printf("{");
    for(i=0;i<n;++i) {
        printf("%d,",num[i]);
        if(i==n-1)
        printf("%d",num[i]);

    }
    printf("}");
    return 0;
}
