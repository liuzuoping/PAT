class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		int len1 = nums1.size();
		int len2 = nums2.size();
		int k1 = len1 + len2;
		int k = (len1 + len2) >> 1;
		vector<int> num;
		int temp1 = 0, temp2 = 0;
		while (temp1 <= len1 - 1 || temp2 <= len2 - 1) {
			if (temp2 >= len2 || (temp1 <= len1 - 1 && nums1[temp1] <= nums2[temp2])) {
				num.push_back(nums1[temp1]);
				temp1++;
			}
			else {
				num.push_back(nums2[temp2]);
				temp2++;
			}
			if (num.size() >= k + 1) break;
		}
		double ans;
		int s = num.size();
		if (k1 % 2) {
			ans = (double)num[s - 1];
		}
		else {
			ans = ((double)num[s - 1] + (double)num[s - 2]) / 2.0;
		}
		return ans;
	}
};