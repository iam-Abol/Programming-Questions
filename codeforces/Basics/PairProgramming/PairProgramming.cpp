
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--){
		int k, n, m;
		cin >> k >> n >> m;
		int *first = new int[n], *second = new int[m];
		for (int i = 0; i < n; i++)
			cin >> first[i];
		for (int i = 0; i < m; i++)
			cin >> second[i];
		vector<int> result;
		int i = 0, j = 0;
		bool f = false;
		for (; i < n&&j < m;){
			f = false;
			if (first[i] == 0){
				result.push_back(first[i]);
				k++;
				i++;
				f = true;
			}
			else if (first[i] <= k){
				result.push_back(first[i]);
				i++;
				f = true;
			}
			if (second[j] == 0){
				k++;
				result.push_back(second[j]);
				j++;
				f = true;
			}
			else if (second[j] <= k){
				result.push_back(second[j]);
				j++;
				f = true;
			}
			if (f == false){
				cout << -1 << endl;
				break;
			}
		}
		if (f){
			
			if (i < n){
				for (; i < n; i++){
					if (first[i] == 0){
						result.push_back(0);
						k++;
					}
					else if (first[i] <= k){
						result.push_back(first[i]);
					}
					else{
						f = false;
						cout << -1 << endl;
						break;
					}
				}
			}
			else if (j < m){
				for (; j < m; j++){
					if (second[j] == 0){
						result.push_back(0);
						k++;
					}
					else if (second[j] <= k){
						result.push_back(second[j]);
					}
					else{
						f = false;
						cout << -1 << endl;
						break;
					}
				}
			}
			if (f){
				for (int l = 0; l < result.size(); l++)
					cout << result[l] << " ";
			}
		}
	}

	return 0;
}

