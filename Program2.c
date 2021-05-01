//
//  main.c
//  program2
//
//  Created by Filippo Bertolina on 04/02/2021.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int radius = 10;
    float volume;
    
    volume = (4.0f / 3.0f) * (radius * radius * radius);
    
    printf("Volume: %f\n", volume);
    
    return 0;
}
