#include <stdio.h>
int reverse(int n,int rev){
    if (n==0){
        return rev;
    }
    return reverse(n/10, rev*10 + n%10);
}
int main(){
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    int result=reverse(n,0);
    if (n==result){
        printf("its a palindrome");
    }
    else{
        printf("its not a palindrome");
    }
    return 0;
}