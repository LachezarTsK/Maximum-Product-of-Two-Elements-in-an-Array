
#include <climits>
using namespace std;

class Solution {
    
public:
    //C++20: int maxProduct(span<const int> nums) const ...
    int maxProduct(const vector<int>& nums) const {
        
        int largestValue = INT_MIN;
        int secondLargestValue = INT_MIN;
        for (const auto& n : nums) {
            if (n > largestValue) {
                secondLargestValue = largestValue;
                largestValue = n;
            } else if (n > secondLargestValue) {
                secondLargestValue = n;
            }
        }

        return (largestValue - 1) * (secondLargestValue - 1);
    }
};
