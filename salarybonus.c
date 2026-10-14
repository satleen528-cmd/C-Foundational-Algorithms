# include <stdio.h>
float calc_bonus(int *exp,int *salary){
    if(*exp>5 && *salary<50000){
        *salary=*salary+(0.15*(*salary));
        return *salary;
    }
    else if(*exp>5 && *salary>=50000){
        *salary=*salary+(0.10*(*salary));
        return *salary;
    }
    else {
        *salary=*salary+(0.05*(*salary));
        return *salary;
    }
}
int main(){
    int exp;
    int salary;
    printf("enter the experience of the employee");
    scanf("%d",&exp);
    printf("enter the amount of salary");
    scanf("%d",&salary);
    float  result=calc_bonus(&exp,&salary);
    printf("the updated  salary of the employee is %.2f",result);
    return 0;
}