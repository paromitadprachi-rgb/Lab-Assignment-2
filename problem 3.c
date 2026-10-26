#include <stdio.h>
int main (){
    int n, i ;
    long long sum=0;
    printf("Enter Number: ");
    scanf("%d",&n);
    for  (i=1;i<=n;i++){
        sum =  sum + i;
    }
    printf ("sum = %d",sum);
    return 0;
}
