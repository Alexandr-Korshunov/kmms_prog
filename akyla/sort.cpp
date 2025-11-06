//sort
#include "sort.h";
#include <vector>;
void bsort(std::vector<int>& vec){
int t;
int n=vec.size();
for (int i = 0; i < n - 1; ++i) {
	for (int j = 0; j < n - i - 1; ++j) {
		if (vec[j] > vec[j + 1]) {
			int t = vec[j];
			vec[j] = vec[j + 1];
			vec[j + 1] = t;
		}
	}
}
}