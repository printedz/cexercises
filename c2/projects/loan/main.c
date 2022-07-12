#include <stdio.h>

int main(void) {

    float loanamount = 8;
    float interest = 8;
    float monthly = 8;
    float monthlyinterest = 8;
    float bal1;
    float bal2;
    float bal3;
    float beforeint;

    printf("What's the amount of the loan? ");
    scanf("%f", &loanamount);

    printf("what's the interest rate? ");
    scanf("%f", &interest);

    printf("what's the monthly payment? ");
    scanf("%f", &monthly);

    
    beforeint = (loanamount - monthly);
    monthlyinterest = ((beforeint / 100) * 6) / 12;

    bal1 = beforeint + monthlyinterest;
    printf("%.2f\n", bal1); 

    bal2 = bal1- monthly + monthlyinterest;
    printf("%.2f\n", bal2);

    bal3 = bal2 - monthly + monthlyinterest;
    printf("%.2f\n", bal3);

    printf("Task completed - exiting");

    return 0;
}