#include <stdio.h>
#include <stdlib.h>
int main()
{
    int array[200000], n, c, d, swap;
    int max=0;
  scanf("%d", &n);
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
  for (c=0;c<(n-1);c++)
  {
    for (d=0;d<n-c-1;d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use < */
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }
    for(int i =0 ;i<n;i++){
        if(i==0||array[i]>max){
            max=array[i];
        }
    }
  for ( c = 0 ; c < n ; c++ ){
     printf("%d", array[c]);
     if(c<n-1){
        printf(" ");}
  }
    printf("\n%d", max);
  return 0;
}
