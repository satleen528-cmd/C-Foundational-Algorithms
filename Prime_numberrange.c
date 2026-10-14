# include <stdio.h>
int prime(int n,int i){
    if(i==1){
        return 1;
    }
    else if(n%i==0){
        return 0;
    }
    return prime(n,i-1);

}
int isprime(int start,int end){
    if(start>end){
        return 0 ;
    }
    else if(start>1 && prime(start,start/2)==1){
        printf("%d ",start);
    }
    return isprime(start+1 ,end);
}
int main(){
    int start,end;
    printf("enter the value of starting number");
    scanf("%d",&start);
    printf("enter the value of ending number");
    scanf("%d",&end);
    printf("the prime numbers between %d  and %d  :",start,end);
    isprime(start,end);
    return 0;
}