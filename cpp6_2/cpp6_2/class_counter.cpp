#include "class_counter.h"

Counter::Counter(int count) : count(count){}

void Counter::add_count() { count += 1; }
void Counter::sub_count() { count -= 1; }
int Counter::get_count() { return count; }