#include<stdio.h>
int main(){
    int a[100], i,n,x,y;
    printf("Enter the size\n");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    scanf("%d",&a[i]);
    printf("\n Enter element to be searched\n");
    scanf("%d",&x);
    for(i=0; i<n; i++){
        if(a[i]==x){
            printf("\n Element found at%d position", i+1);
            break;  
        }
    }
    if(i==n){
        printf("\n Element not found");
    }

    return;
}

