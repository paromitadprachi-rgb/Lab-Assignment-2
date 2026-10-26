#include <stdio.h>
int main (){
    int n,i;
    long long sum=0;
    printf("Enter Number:");
    scanf("%d",&n);
    for (i=2;i<=n;i=i+2){
    sum = sum + i;
    }
    printf("sum of  even numbers= %ll\d",sum);
    return 0;
}
