#ifndef TRANSFORM_H
#define TRANSFORM_H

void transform_point(float point[3], float matrix[3][3]);
void scale(float scale_x, float scale_y, float matrix[3][3]);
void shift(float delta_x, float delta_y, float matrix[3][3]);
void rotate(float angle_degrees, float matrix[3][3]);

#endif