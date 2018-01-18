/*
Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.

You may assume that the array is non-empty and the majority element always exist in the array.

Credits:
Special thanks to @ts for adding this problem and creating all test cases.

*/
#include <iostream>
#include <vector>
#include <algorithm>
class Solution {
public:
	int majorityElement(std::vector<int>& nums) {
		int size = ((nums.size() / 2) + 1);
		int counter = 1;
		std::vector<int>temp;
		int result = 0;
		std::sort(nums.begin(), nums.end());
		for (int i = 1; i < nums.size(); ++i)
		{
			if (nums.size() == 2)
			{
				if (nums.at(0) == nums.at(1))
					return nums.at(0);
			}
			if (nums.at(i) == nums.at(i - 1))
			{
				counter++;
				if (counter == size)
				{
					temp.push_back(nums.at(i - 1));
				}
			}
			else
			{
				counter = 1;
			}
		}
		if (temp.size())
		{
			result = temp.at(0);
			return result;
		}
		return nums.at(0);
	}
};