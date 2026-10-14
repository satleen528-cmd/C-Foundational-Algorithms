# include <stdio.h>
int fact(int n){
    if (n==0||n==1){
        return 1;
    }
    return (n*fact(n-1));
}

int main(){
    int n , result;
    printf("enter the value of n");
    scanf("%d",&n);
    result=fact(n);
    printf("the factorial of %d  is",n);
    printf("%d",result);
    return 0;
}