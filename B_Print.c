#include<stdio.h>
void print(int n){
    for(int i = 1; i <= n; i++){
        printf("%d",i);
        if(i<n) printf(" ");
    }
}
int main(){
    int a;
    scanf("%d", &a);
    print(a);
}