#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k[n];
    for(int i=0;i<n;i++)
        scanf("%d",&k[i]);
    int check=k[0],position,a=0;
    for(int i=0;i<n;i++)
        if (check<k[i])
            {
                check=k[i];
                position=i+1;
                a++;

            }
        else
            position=i-a-1;
    printf("%d %d",position,check);
    return 0;
}
