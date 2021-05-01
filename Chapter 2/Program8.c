//
//  main.c
//  program8
//
//  Created by Filippo Bertolina on 04/02/2021.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    float loan, interest, monthly_payment;
    float balance, i;
    
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);
    
    balance = loan;
    i = (interest / 100.0f) / 12.0f;
    
    balance = balance + (i * balance) - monthly_payment;
    printf("Balance remaining after first payment: %.2f\n", balance);
    balance = balance + (i * balance) - monthly_payment;
    printf("Balance remaining after second payment: %.2f\n", balance);
    balance = balance + (i * balance) - monthly_payment;
    printf("Balance remaining after third payment: %.2f\n", balance);
    
    return 0;
}
