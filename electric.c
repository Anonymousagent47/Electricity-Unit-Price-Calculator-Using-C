#include<stdio.h>
int main()
{
    float amount;
    int unit;
    printf("\n................................................\n");
    printf(": WELCOME TO ELECTRICITY UNIT PRICE CALCULATOR :\n");
    printf(".................................................\n\n");
    printf("Enter Your Units: ");
    scanf("%d",&unit);
    if(unit<=50){
        amount=unit*3.05;
    }else if(unit<=100){
        amount=152.5+((unit-50)*3.5);
    }else if(unit<=250){
        amount=327.5+((unit-100)*4.15);
    }else{
        amount=950+((unit-250)*5.2);
    }
    printf("Your Total Bill Amount is %0.2f",amount);
    return 0;
}
