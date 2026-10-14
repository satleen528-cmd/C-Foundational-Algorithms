#include <stdio.h>
int power(int digit,int count){
    if (count==0){
        return 1;
    }
    return digit*power(digit,count-1);
}
int amstrong(int n,int count){
    if (n==0){
        return 0;
    }
    return power(n%10,count)+amstrong(n/10,count);
}
int main(){
    int n,temp,count=0,result;
    printf("enter the value");
    scanf("%d",&n);
    int x=n;
    temp=n;
    while (x>0){
        count++;
        x=x/10;
    }
    result=amstrong(n,count);
    if (result==temp){
        printf("its an amstrong number");
    }
    else{
        printf("its not an amstrong number");
    }
    return  0;
}