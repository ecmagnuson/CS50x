#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_creditnum(int n)
{
    int lengths[3] = {15, 16, 13};
    for (int i = 0; i < sizeof(lengths) /  sizeof(lengths[0]) ; i++) {
        if(lengths[i] == n) {
            return true;
        }
    }
    return false;
}

int len(long num) 
{
    return (int)(num ? log10(num) + 1 : 1);
}

int main() {
    long num = 4417123456789113;

    if (!is_creditnum(len(num))) {
        printf("not a credit card number");
        exit(1);
    }

    //create an array with num reversed
    int nums[len(num)];
    for (int i = 0 ; i < sizeof(nums) / sizeof(nums[0]) ; i++) {
        nums[i] = num % 10;
        num /= 10;
    }

    int sum = 0;
    for (int i = 0 ; i < sizeof(nums) / sizeof(nums[0]) ; i++) {
        if (i % 2 == 1) {
            int temp = nums[i] * 2;
            while (temp != 0) {
                    int remainder = temp % 10;
                    sum += remainder;
                    temp /= 10;
            }          
        } else {
            sum += nums[i];
        }
    }

    if (sum % 10 == 0) {
        printf("valide credit card number");
    }
    
    return 0;
}