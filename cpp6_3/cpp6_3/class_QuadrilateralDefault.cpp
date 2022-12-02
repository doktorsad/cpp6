#include "class_QuadrilateralDefault.h"

QuadrilateralDefault::QuadrilateralDefault() = default;
QuadrilateralDefault::QuadrilateralDefault(int i) {
    set_sides(10);
    set_sides(20);
    set_sides(30);
    set_sides(40);
    set_corners(50);
    set_corners(60);
    set_corners(70);
    set_corners(80);
    set_name("Quadrilateral Default");
}

void QuadrilateralDefault::print()  {
    Object::print();
    std::cout << "Sides: a=" << get_side_one() << " b=" << get_side_two() << " c=" << get_side_three() <<
        " d=" << get_side_four() << '\n' << "Corners: A=" << get_corner_one() << " B=" << get_corner_two() <<
        " C=" << get_corner_three() << " D=" << get_corner_four() << '\n';
}

bool QuadrilateralDefault::check_sides() {
    if (get_count_sides() == 4)
        return true;
    return false;
}

bool QuadrilateralDefault::check_leght_sum() {
    if (get_side_one() <= get_side_two() + get_side_three() + get_side_four() ||
        get_side_two() <= get_side_one() + get_side_three() + get_side_four() ||
        get_side_three() <= get_side_one() + get_side_two() + get_side_four() ||
        get_side_four() <= get_side_one() + get_side_two() + get_side_three())
        return true;
    return false;
}

bool QuadrilateralDefault::check_corners_sum() {
    if (get_corner_one() + get_corner_two() + get_corner_three() + get_corner_four() == 360)
        return true;
    return false;
}

bool QuadrilateralDefault::check_object()  {
    if (check_sides() && check_leght_sum() && check_corners_sum())
        return true;
    return false;
}