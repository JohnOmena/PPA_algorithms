#include <bits/stdc++.h>
using namespace std;

void add_edge(int w, int i, vector<int> vec[]){
	vec[w].push_back(i);
}

void depth_first_search(int node, vector<int> vec[], int dinamp[], bool vec01[]){

  vec01[node] = true;

	for (int i = 0; i < vec[node].size(); i++){

		if (!vec01[vec[node][i]]){
			depth_first_search(vec[node][i], vec, dinamp, vec01);
    }

		dinamp[node] = max(dinamp[node], 1 + dinamp[vec[node][i]]);
	}
}

int long_way(int number, vector<int> vec[]){

  bool vec01[number + 1];
	memset(vec01, false, sizeof vec01);

	int dinamp[number + 1];
	memset(dinamp, 0, sizeof dinamp);

	for (int i = 1; i <= n; i++){

		if (!vec01[i]){
			depth_first_search(i, vec, dinamp, vec01);
    }
  }

	int answ = 0;

	for (int i = 1; i <= number; i++){
		answ = max(answ, dinamp[i]);
	}

	return answ;
}

int main(){

	int number = 4;
	vector<int> vec[number + 1];

	add_edge(2, 1, vec);
	add_edge(3, 1, vec);
	add_edge(2, 3, vec);
	add_edge(4, 2, vec);

	cout << long_way(number, vec);
	return 0;
}
