#include <stdio.h>

int main() {
    int c,m;
    scanf("%d",&c);
    scanf("%d",&m);
    for (int i=0; i<c; i++){
        for(int j=0; j<=m; j++){
            printf("%d",j);
            if(j<m){
                printf(" ");
            }
        }
    printf("\n");
    }
    return 0;
}
