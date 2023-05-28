
public class Solution {

    public int maxProduct(int[] nums) {

        int largestValue = Integer.MIN_VALUE;
        int secondLargestValue = Integer.MIN_VALUE;
        for (int n : nums) {
            if (n > largestValue) {
                secondLargestValue = largestValue;
                largestValue = n;
            } else if (n > secondLargestValue) {
                secondLargestValue = n;
            }
        }

        return (largestValue - 1) * (secondLargestValue - 1);
    }
}
