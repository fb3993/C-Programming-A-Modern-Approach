//
//  main.c
//  program6
//
//  Created by Filippo Bertolina on 04/02/2021.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int amount, twenties, tens, fives, ones;
    
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);
    
    twenties = amount / 20;
    amount = amount - twenties * 20;
    tens = amount / 10;
    amount = amount - tens * 10;
    fives = amount / 5;
    amount = amount - fives * 5;
    ones = amount;
    
    printf("$20 bills: %d\n$10 bills: %d\n $5 bills: %d\n $1 bills: %d\n", twenties, tens, fives, ones);
    
    return 0;
}
