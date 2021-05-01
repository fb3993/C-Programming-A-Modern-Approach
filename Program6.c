//
//  main.c
//  program7
//
//  Created by Filippo Bertolina on 01/05/2021.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int x, polynomial_result;
    
    printf("Enter x: ");
    scanf("%d", &x);
    
    polynomial_result = ((((3 *x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
    
    printf("Polynomial result: %d\n", polynomial_result);
    
    return 0;
}
