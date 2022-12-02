#include "class_Parallelogram.h"

Parallelogram::Parallelogram() = default;
Parallelogram::Parallelogram(int i) {
    set_sides(20);
    set_sides(30);
    set_sides(20);
    set_sides(30);
    set_corners(30);
    set_corners(40);
    set_corners(30);
    set_corners(40);
    set_name("Parallelogram");
}

bool Parallelogram::check_object()  {
    if (QuadrilateralDefault::check_object() && (get_side_one() == get_side_three() &&
        get_side_two() == get_side_four()) && (get_corner_one() + get_corner_two() == 180 &&
            get_corner_three() + get_corner_four() == 180))
        return true;
    return false;
}