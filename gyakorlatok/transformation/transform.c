#include "transform.h"

#define _USE_MATH_DEFINES
#include <math.h>

void transform_point(float point[3], float matrix[3][3]) {

    float point_x_new = matrix[0][0] * point[0] + matrix[0][1] * point[1] + matrix[0][2] * point[2];
    float point_y_new = matrix[1][0] * point[0] + matrix[1][1] * point[1] + matrix[1][2] * point[2];
    float point_z_new = matrix[2][0] * point[0] + matrix[2][1] * point[1] + matrix[2][2] * point[2];

    point[0] = point_x_new;
    point[1] = point_y_new;
    point[2] = point_z_new;
}

void scale(float scale_x, float scale_y, float matrix[3][3]) {

    matrix[0][0] *= scale_x;
    matrix[1][1] *= scale_y;
}

void shift(float delta_x, float delta_y, float matrix[3][3]) {

    matrix[0][2] += delta_x;
    matrix[1][2] += delta_y;
}

void rotate(float angle_degrees, float matrix[3][3]) {

    float angle_radians = angle_degrees * (M_PI / 180.0);
    float cos_angle = cos(angle_radians);
    float sin_angle = sin(angle_radians);

    matrix[0][0] = cos_angle;
    matrix[0][1] = -sin_angle;
    matrix[1][0] = sin_angle;
    matrix[1][1] = cos_angle;
}