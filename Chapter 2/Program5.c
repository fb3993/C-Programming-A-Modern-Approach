//
//  main.c
//  program5
//
//  Created by Filippo Bertolina on 04/02/2021.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int x, value;
    
    printf("Enter x: ");
    scanf("%d", &x);
    
    value = 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6;
    
    printf("Value of the polynomial: %d\n", value);
    
    return 0;
}
