#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b){
    int *aa= (int*)a;
    int *bb=(int*)b;
    if(aa[0]>bb[0]) return 1;
    else return -1;
}
int main()
{
    int n,i,j,temp,data[200000],max;
    scanf("%d", &n);
    for(i=0;i<=n-1;i++){
        scanf("%d", &data[i]);
    }
   qsort(data,n,sizeof(data[0]),compare);
   for(i=0;i<=n-1;i++){
    printf("%d", data[i]);
    if(i<n-1){
        printf(" ");}
    if(i==n-1){max= data[i];}
   }
   printf("\n%d", max);

    return 0;
}
