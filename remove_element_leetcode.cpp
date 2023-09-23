#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeDuplicates(std::vector<int> &nums)
    {
        int i = 1, j = 0;
        while (i < nums.size())
        {
            if (nums[i] == nums[j])
            {
                i++;
            }
            else
            {
                nums[++j] = nums[i++];
            }
        }
        return j + 1;
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {1, 1, 2, 2, 2, 3, 4, 4, 5, 5};

    int newLength = solution.removeDuplicates(nums);

    cout << "Modified Array: ";
    for (int i = 0; i < newLength; i++)
    {
        cout << nums[i] << " ";
    }
    cout << "\nNew Length: " << newLength << endl;

    return 0;
}
