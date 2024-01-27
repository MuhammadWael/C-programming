int main()
{
    int a[2][2],d,adj[2][2];
    int i,j;
    float invA[2][2];
    printf("Enter elements for 2 * 2 matrix\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {

            scanf("%d",&a[i][j]);
        }
    }

    d = (a[0][0]*a[1][1])-(a[0][1]*a[1][0]);


    adj[0][0]=a[1][1];
    adj[1][1]=a[0][0];
    adj[0][1]=-a[0][1];
    adj[1][0]=-a[1][0];
    printf("Matrix A is\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("Inverse of Matrix A is\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            invA[i][j]=(adj[i][j])/(float)d;
            printf("%.1f ",invA[i][j]);
        }
        printf("\n");
    }
    return 0;
}
