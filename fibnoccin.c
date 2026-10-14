#include <stdio.h>
int fib(int n){
    if (n==0){
        return 0;
    }
    else if (n==1){
        return 1;
    }
    return (fib(n-1)+fib(n-2));
}


int main(){
    int n,result;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("the fibonocci series of %d th term is:",n);
    result=fib(n);
    printf("%d",result);
    return 0;
}