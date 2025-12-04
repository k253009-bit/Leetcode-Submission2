#include<stdio.h>

void moveZeroes(int nums[], int n) {
    int insertPos = 0;
    for (int i=0; i<n; i++) {
        if (nums[i] != 0) {
            nums[insertPos] = nums[i];
            insertPos++;
        }
    }

    while (insertPos < n) {
        nums[insertPos] = 0;
        insertPos++;
    }
}

int main() {
    int nums[] = {0, 1, 0, 3, 12};
    int n = 5;

    moveZeroes(nums, n);

    printf("Output: ");
    for (int i=0; i<n; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}
