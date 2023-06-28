#include "inout.h"
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> vec;
    read(vec);
    std::sort(vec.begin(), vec.end());
    print(vec);
    return 0;
}