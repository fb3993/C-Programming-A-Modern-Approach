//
//  main.c
//  program3
//
//  Created by Filippo Bertolina on 04/02/2021.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int radius;
    float volume;
    
    printf("Enter the radius of the sphere: ");
    scanf("%d", &radius);
    
    volume = (4.0f / 3.0f) * (radius * radius * radius);
    
    printf("Volume: %.2f\n", volume);
    
    return 0;
}
