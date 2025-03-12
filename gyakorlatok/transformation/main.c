#include "transform.h"

#include <stdio.h>

int main() {

    float point[3] = {1, 2, 1};
    float matrix[3][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };
    
    scale(1.5, 2, matrix);
    shift(-5, 8, matrix);
    rotate(90, matrix);
    transform_point(point, matrix);

    printf("A pont transzformalas utan: (%.2f, %.2f)", point[0], point[1]);

    return 0;
}