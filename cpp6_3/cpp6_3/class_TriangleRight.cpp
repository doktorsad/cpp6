#include "class_TriangleRight.h"

TriangleRight::TriangleRight() {
    set_sides(10);
    set_sides(20);
    set_sides(30);
    set_corners(50);
    set_corners(60);
    set_corners(90);
    set_name("Triangle Right");
}
 bool TriangleRight::check_object() {
     if (TriangleDefault::check_object() && (get_corner_one() == 90 ||
        get_corner_two() == 90 || get_corner_three() == 90))
        return true;
 return false;
 }
