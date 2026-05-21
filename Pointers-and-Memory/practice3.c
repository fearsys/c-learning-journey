#include <stdio.h>

int main() {
    int nums[4] = {10, 20, 30, 40};

    for (int i = 0; i < 4; i++) {
       printf("index: nums[%d] = %d  |  pointer: *(nums+%d) = %d\n", i, nums[i], i, *(nums + i));
    }

    return 0;
}