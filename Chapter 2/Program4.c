//
//  main.c
//  program4
//
//  Created by Filippo Bertolina on 04/02/2021.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    float amount, total;
    
    printf("Enter the amount: ");
    scanf("%f", &amount);
    
    total = amount * 1.05f;
    
    printf("With tax added: %.2f\n", total);
    
    return 0;
}
