# include <stdio.h>
float calculateEB(int units){
    float bill,totalbill;
    if (units<=100){
        bill=units*1.5;
        return bill;
    }
    else if(units>100 &&  units<=200){
        bill=100*1.5+(units-100)*2.5;
        return bill;
    }
    else if(units>200 && units<300){
        bill=100*1.5 + 100*2.5 +(units-200)*4;
        return bill;
    }
    else if(units>300){
        bill=100*1.5 + 100*2.5 +(units-200)*4;
        totalbill=bill+(bill*0.10);
        return totalbill;
    }
    else{
        printf("enter the appropriate units");
        return 0;
    }
}
int main(){
    int units;
    printf("enter the units of the elctricity");
    scanf("%d",&units);
    float result=calculateEB(units);
    printf("the total electricity bill is %.2f:",result);
    return 0; 
}