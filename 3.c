#include<stdio.h>

int removeDuplicates(int nums[], int n) {
    if (n == 0)
        return 0;

    int k = 1;  // Index for unique elements

    for (int i=1; i<n; i++) {
        if (nums[i] != nums[i-1]) {
            nums[k] = nums[i];
            k++;
        }
    }

    return k;  
}

int main() {
    int nums[] = {0,0,1,1,1,2,2,3,3,4};
    int n = sizeof(nums) / sizeof(nums[0]);

    int k = removeDuplicates(nums, n);

    printf("k = %d\nUnique elements: ", k);
    for (int i = 0; i < k; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}
