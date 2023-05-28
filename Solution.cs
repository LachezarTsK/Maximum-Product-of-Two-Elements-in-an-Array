
using System;

public class Solution
{
    public int MaxProduct(int[] nums)
    {
        int largestValue = int.MinValue;
        int secondLargestValue = int.MinValue;
        foreach (var n in nums)
        {
            if (n > largestValue)
            {
                secondLargestValue = largestValue;
                largestValue = n;
            }
            else if (n > secondLargestValue)
            {
                secondLargestValue = n;
            }
        }

        return (largestValue - 1) * (secondLargestValue - 1);
    }
}
