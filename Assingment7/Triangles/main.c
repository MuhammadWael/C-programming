#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#define MAX 1000
struct triangle
{
    int a;
    int b;
    int c;
    float area;
};
int triangles_num=1;
struct triangle get_triangle(void);
struct triangle *sort_triangles(struct triangle* tri);
void print_triangles(struct triangle);
int main()
{
    int i;
    struct triangle *triangles =malloc(sizeof(struct triangle)*(triangles_num+1));
    printf("Enter number of triangles\n");
    scanf("%d",&triangles_num);
    for(i=0;i<triangles_num;i++)
    {
        triangles[i]=get_triangle();
    }
    sort_triangles(triangles);
    printf("Triangles Sorted by area\n");
    for(i=0;i<triangles_num;i++)
    {
        print_triangles(triangles[i]);
    }

    return 0;
}
struct triangle get_triangle(void)
{
        int x,y,z;
        float area,p;
        struct triangle tri;
        printf("Enter Three sides of triangle:");
        scanf("%d %d %d",&x,&y,&z);
        tri.a = x;
        tri.b = y;
        tri.c = z;
        p =(x+y+z)/2.0;
        tri.area = sqrt(p*(p-x)*(p-x)*(p-x));
        return tri;

}
struct triangle* sort_triangles(struct triangle* tri)
{
        int j;
        struct triangle temp;
        for(int i=0;i<triangles_num-1;i++)
        {
            for(j=i+1;j<triangles_num;j++)
                {
                if(tri[i].area>tri[j].area)
                    {
                    temp=tri[i];
                    tri[i]=tri[j];
                    tri[j]=temp;
                    }
                }
        }
        return tri;
}
void print_triangles(struct triangle triangle)
{
    printf("%d %d %d\n",triangle.a,triangle.b,triangle.c);
}
