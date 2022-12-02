#include "class_Triangle_Default.h"

TriangleDefault::TriangleDefault() = default;
TriangleDefault::TriangleDefault(int i) {
    set_sides(10);
    set_sides(20);
    set_sides(30);
    set_corners(50);
    set_corners(60);
    set_corners(70);
    set_name("Triangle Default");
}

void TriangleDefault::print() {
    Object::print();
    std::cout << "Sides: a=" << get_side_one() << " b=" << get_side_two() << " c=" << get_side_three() << '\n' <<
        "Corners: A=" << get_corner_one() << " B=" << get_corner_two() << " C=" << get_corner_three() << '\n';
}

bool TriangleDefault::check_sides() {
    if (get_count_sides() == 3)
        return true;
    return false;
}

bool TriangleDefault::check_leght_sum() {
    if (get_side_one() + get_side_two() >= get_side_three() ||
        get_side_one() + get_side_three() >= get_side_two() || get_side_two() + get_side_three() >= get_side_one())
        return true;
    return false;
}

bool TriangleDefault::check_corner_sum() {
    if (get_corner_one() + get_corner_two() + get_corner_three() == 180)
        return true;
    return false;
}
bool TriangleDefault::check_object() {
    if (check_sides() && check_corner_sum() && check_leght_sum())
        return true;
    return false;
}