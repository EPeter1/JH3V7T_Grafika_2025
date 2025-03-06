#include <stdbool.h>

typedef struct Cuboid {

	double edge_a;
	double edge_b;
	double edge_c;
} Cuboid;

int set_cuboid_data(Cuboid* cuboid, double edge_a, double edge_b, double edge_c);
double get_cuboid_surface_area(const Cuboid* cuboid);
double get_cuboid_volume(const Cuboid* cuboid);
bool has_square_side(const Cuboid* cuboid);