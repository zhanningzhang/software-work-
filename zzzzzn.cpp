#include <iostream>
#include <vector>
using namespace std;

int maxSubArraySum(const vector<int>& a) {
    int size = a.size();
    int max_so_far = 0, max_end = 0;
    for (int i = 0; i < size; i++) {
        max_end = max_end + a[i];
        if (max_end < 0) {
            max_end = 0;
        }
        if (max_so_far < max_end) {
            max_so_far = max_end;
        }
    }
    return max_so_far;
}

int main() {
    vector<int> a;
    int flag=0;
    cin >> flag;
    while (flag != -999)
    {
        a.push_back(flag);
        cin >> flag;
    }
    cout << "Maximum contiguous sum is " << maxSubArraySum(a);
    return 0;
}
