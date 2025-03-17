#include <iostream>
#include <vector>

int findMaxConsecutiveOnes(std::vector<int>& nums) {
    int count, answer = 0;
    
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] == 1) {
            count++;

            if(count > answer) {
                answer = count;
            }

        } else {
            count = 0;
        }
    }

    return answer;
}

int main() {
    std::vector<int> testVector = {1, 1, 0, 1, 1, 1};
    
    std::cout << findMaxConsecutiveOnes(testVector) << std::endl;
    
    return 0;
}