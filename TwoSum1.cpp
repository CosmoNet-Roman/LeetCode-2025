#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {

    // Create an unordered_map to store previously seen numbers and indices
    unordered_map<int, int> numMap;

    // Iterate through the input array
    for(int i = 0; i < nums.size(); i++) {
        // Calculate the 
        int twoSum = target - nums[i];

        // If the twoSum value exists in the map
        if(numMap.find(twoSum) != numMap.end()) {
            // Return the indices of the two numbers that add up to the target number
            return {numMap[twoSum], i};
        }

        // Add the current number and its index to the unordered_map
        numMap[nums[i]] = i;
    }

    // If no solution, return an empty vector
    return {};
}

int main() {

    // Adjust testVector & target values for user test case
    vector<int> testVector = {2, 7, 11, 15};
    int target = 9;

    // Output vector used for printing the return vector from twoSum
    vector<int> outputVector = twoSum(testVector, target);

    // Print the return vector
    cout << "[ ";
    for(int i : outputVector) {
        cout << i << " ";
    }
    cout << "]" << endl;

    return 0;
}
