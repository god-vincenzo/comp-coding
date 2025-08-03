#include <iostream>
#include <vector>
using namespace std;

int removeD(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return 0;

    int k = 1;
    for (int i = 1; i < n; i++) {
        if (nums[i] != nums[k - 1]) {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int newLen = removeD(nums);

    cout << newLen << endl;
    for (int i = 0; i < newLen; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;

}

