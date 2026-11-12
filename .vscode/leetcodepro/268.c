int missingNumber(int* nums, int numsSize) {
    for (int number = 0; number <= numsSize; number++) {
        int found = 0;  // 当前数字是否在数组中：0 否，1 是

        for (int i = 0; i < numsSize; i++) {
            if (nums[i] == number) {
                found = 1;
                break;  // 已找到，结束内层查找
            }
        }

        if (found == 0) {
            return number;  // 找遍数组都没找到，就是缺失的数字
        }
    }

    return -1;  // 按题目条件，正常不会执行到这里
}