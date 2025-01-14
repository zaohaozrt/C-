#include <iostream>
using namespace std;
/**
 你的朋友提议玩一个游戏:将写有数字的 n个纸片放入口袋中，你可
 以从口袋中抽取4次纸片，每次记下纸片上的数字后都将其放回口袋中。
 如果这4个数字的和是m，就是你赢，否则就是你的朋友赢。
 你挑战了好几回，结果一次也没赢过，于是怒而撕破口袋，取出所有纸片，检查自己是否真的有赢的可能性。
 请你编写一个程序，判断当纸片上所写的数字是k1,k2,…， kn时，是否存在抽取4次和为m 的方案。如果存在，输出 Yes;否则，输出No。
 限制条件:1 ≤n ≤ 50 , 1 ≤m≤108，1 ≤ki ≤103
 * @return
 **/
const int MAX_N = 50;

int main() {
	int n, m, k[MAX_N];

	//从标准输入读入
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%d", &k[i]);
	}

	// 是否找到和为m的组合标记
	bool f = false;

	//通过四层循环枚举所有方案
	for (int a = 0; a < n; a++) {
		for (int b = 0; b < n; b++) {
			for (int c = 0; c < n; c++) {
				for (int d = 0; d < n; d++) {
					if (k[a] + k[b] + k[c] + k[d] == m) {
						f = true;
					}
				}
			}
		}
	}

	//输出到标准输出
	if (f) {
		puts("Yes");
	} else {
		puts("No");
	}

	return 0;
}
