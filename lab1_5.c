#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k[n];
    for(int i=0;i<n;i++)
        scanf("%d",&k[i]);
    int check=k[0],position=0;
    for(int i=1;i<n;i++)
        if (k[i]>check)
            {
                check=k[i];
                position=i;
            }
    printf("%d %d",position+1,check);
    return 0;
}
