# include <stdio.h>
void greatest(int *p,int *q,int *r){
    if (*p>*q && *p>*r){
        printf("%d is the greatest",*p);
    }
    else if(*q>*p && *q>*r){
        printf("%d is the greatest",*q);
    }
    else{
        printf("%d is the greatest",*r);
    }

}
int main(){
    int a,b,c;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    printf("enter the value of c");
    scanf("%d",&c);
    greatest(&a,&b,&c);
    return 0;
}