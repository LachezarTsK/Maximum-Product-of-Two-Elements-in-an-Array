
/**
 * @param {number[]} nums
 * @return {number}
 */
var maxProduct = function (nums) {

    let largestValue = Number.MIN_SAFE_INTEGER;
    let secondLargestValue = Number.MIN_SAFE_INTEGER;
    for (let n of nums) {
        if (n > largestValue) {
            secondLargestValue = largestValue;
            largestValue = n;
        } else if (n > secondLargestValue) {
            secondLargestValue = n;
        }
    }

    return (largestValue - 1) * (secondLargestValue - 1);
};
