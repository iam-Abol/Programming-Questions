#include "stdafx.h"
#include <iostream>
#include <tuple>
#include <set>
#include <vector>
using namespace std;
int results[201];
void recursiveFind(int number, int depth,vector<int> path){
	if (depth > results[number] || number > 200)
		return;
	results[number] = depth;
	path.push_back(number);
	for (int i = path.size()-1; i >=0 ; i--){
		
		recursiveFind(number + path[i], depth + 1, path);
	}
}
int _tmain(int argc, _TCHAR* argv[])
{
	for (int i = 0; i < 201; i++)
		results[i] = INT_MAX;
	vector<int> path;
	recursiveFind(1, 0,path);
	int result = 0;
	for (int i = 1; i < 201; i++)
		result += results[i];
	cout << result << endl;
	return 0;
}
/*numbers[1].minimumNumberOfOperationsNeedsToCreate = 0;
	vector<tuple<int, int, int> > way;
	way.push_back(make_tuple(1, 1, 2));
	numbers[2].minimumNumberOfOperationsNeedsToCreate = 1; numbers[2].ways.push_back(way);
	for (int i = 3; i <= 200; i++){
		f(i);
	}



	int result = 0;
	for (int i = 0; i < 200; i++)
		result += numbers[i].minimumNumberOfOperationsNeedsToCreate;
	cout << result << endl;*/
//
//void swap(int &a, int &b){
//	int t = a;
//	a = b;
//	b = t;
//}
////void sortTuple(tuple<int, int, int> t){
////	if (get<0>(t) < get<1>(t))
////		swap(get<0>(t), get<1>(t));
////}
//struct Number{
//	int minimumNumberOfOperationsNeedsToCreate = 0;
//	vector<vector<tuple<int, int, int> > > ways;
//}numbers[201];
//Number findMinimumNumberOfOperationsNeedsToCreate(vector<vector<tuple<int, int, int> > >  a, vector<vector<tuple<int, int, int> > >  b, int valueOfA, int valueOfB){
//	Number result;
//	int minNumberOfOp = INT_MAX;
//	
//	for (int i = 0; i < a.size(); i++){
//
//		set<tuple<int, int, int> > temp;
//		for (int k = 0; k < a[i].size(); k++){
//			temp.insert(a[i][k]);
//		}
//		for (int j = 0; j < b.size(); j++){
//			for (int l = 0; l < b[j].size(); l++){
//				temp.insert(b[j][l]);
//			}
//			temp.insert(make_tuple(valueOfA, valueOfB, valueOfA + valueOfB));
//			if (temp.size() < minNumberOfOp){
//				result.ways.clear();
//				vector<tuple<int, int, int> > t;
//				set<tuple<int, int, int> >::iterator it = temp.begin();
//				while (it != temp.end()){
//					t.push_back(*it);
//					it++;
//				}
//
//				result.ways.push_back(t);
//				minNumberOfOp = temp.size();
//			}
//			else if (temp.size() == minNumberOfOp){
//				vector<tuple<int, int, int> > t;
//				set<tuple<int, int, int> >::iterator it = temp.begin();
//				while (it != temp.end()){
//					t.push_back(*it);
//					it++;
//				}
//
//				result.ways.push_back(t);
//			}
//		}
//
//	}
//	if (valueOfA == 1){
//		minNumberOfOp = b[0].size() + 1;
//		tuple<int, int, int> lastElement = make_tuple(1, valueOfB, valueOfB + 1);
//		for (int i = 0; i < b.size(); i++)
//			b[i].push_back(lastElement);
//
//		result.ways = b;
//	}
//	result.minimumNumberOfOperationsNeedsToCreate = minNumberOfOp;
//	return result;
//}
//
//void f(int n){
//	Number result;
//	result.minimumNumberOfOperationsNeedsToCreate = INT_MAX;
//
//	for (int i = 1; i <= n / 2; i++){
//		Number t = findMinimumNumberOfOperationsNeedsToCreate(numbers[i].ways, numbers[n - i].ways, i, n - i);
//
//		/*for (int k = 0; k < t.ways.size(); k++){
//			t.ways[k].push_back(make_tuple(i, n - i, n));
//			}*/
//		if (t.minimumNumberOfOperationsNeedsToCreate < result.minimumNumberOfOperationsNeedsToCreate){
//			result = t;
//		}
//		else if (t.minimumNumberOfOperationsNeedsToCreate == result.minimumNumberOfOperationsNeedsToCreate){
//			result.ways.push_back(t.ways[0]);
//		}
//	}
//	numbers[n] = result;
//}