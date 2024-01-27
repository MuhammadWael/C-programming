
#include<stdio.h>

int main()
{
    int row,col,i,j,n,count;
    printf("Enter number of columns :");
    scanf("%d",&col);
    printf("Enter number of rows :");
    scanf("%d",&row);

    printf("Enter The elements\n");
    int arr[row][col];
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter The element :");
    scanf("%d",&n);
        for(i=0;i<row;i++){
            for(j=0;j<col;j++){
              if(arr[i][j]==n) count++;
        }
    }

       printf("The Array\n");
       for(i=0;i<row;i++){
       printf("|");
            for(j=0;j<col;j++){
                 printf("%d ",arr[i][j]);
        }
        printf("|\n");
    }
    printf("The frequncy of element is : %d",count);
    return 0;
}

