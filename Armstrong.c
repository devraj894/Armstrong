#include<stdio.h>
int main(){
    int num;
    int sum = 0;
    printf("Enter any number : ");
    scanf("%d",&num);
    int temp = num;
    
    while(temp != 0){
        int rem = temp % 10;
        sum += rem*rem*rem;
        temp /= 10;
    }

    if(num == sum){
        printf("%d is Armstrong Number",num);
    }else{
        printf("%d is not Armstrong Number",num);
    }

    return 0;
}