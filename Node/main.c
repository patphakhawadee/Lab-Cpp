#include <stdio.h>
#include <stdlib.h>

int max = 999999999;
int main(){
int node,e,i,j;

scanf("%d %d", &node,&e);
int arr[node][node];

for(i=0;i<node;i++){
    for(j=0;j<node;j++){
        arr[i][j] = max;
    }
}
int startnode,endnode;
int s,t,w;
scanf("%d %d", &startnode,&endnode);
for(i=0;i<e;i++){
    scanf("%d %d %d", &s,&t,&w);
    arr[s][t]=w;
    arr[t][s]=w;
}

for(i=0;i<node;i++){
    for(j=0;j<node;j++){
        printf("%d" ,arr[i][j]);
        printf("  ");
    }
    printf("\n");
}

return 0;
}

