// src/sum.cpp
#include "sum.h"
#include <vector>

using std::vector;

int sum(const vector<int>& nums) {
    int total = 0;
    for (int num : nums) {
        total += num;
    }
    return total;
}
