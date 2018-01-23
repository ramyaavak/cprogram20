#include<stdio.h>
int main(){
    int power,number;
    int result=1;
    int i = 0;
    printf("Enter a number : ");
    scanf("%d",&number);
    printf("Power : ");
    scanf("%d",&power);
    for(i = 0;i<power;i++){
        result = result * number;
    }
    printf("%d to the power of %d is = %d\n",number,power,result);
    
    return 0;
}
