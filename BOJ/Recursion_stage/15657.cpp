#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void combination_repeat(const vector<int>& nums, vector<int> comb, int N, int M, int target, int index) {
	if (index == M) {
		for (int i = 0; i < index; i++) {
			cout << comb[i] << " ";
		}
		cout << "\n";
	}
	else if (target == N) {								//M개보다 숫자를 적게 뽑은 경우
		return;
	}
	else {
		comb[index] = nums[target];
		combination_repeat(nums, comb, N, M, target, index + 1);			//target을 뽑는 경우 (다음 target이 중복될 수 있음)
		combination_repeat(nums, comb, N, M, target + 1, index);			//target을 뽑지 않는 경우
	}
}

int main() {
	int N, M, tmp;
	cin >> N >> M;
	vector<int> comb(N, 0), nums;

	for (int i = 0; i < N; i++) {
		cin >> tmp;
		nums.push_back(tmp);
	}

	sort(nums.begin(), nums.end());
	combination_repeat(nums, comb, N, M, 0, 0);
}
