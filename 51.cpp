#include <bits/stdc++.h>
using namespace std;

int Smallest_sum(vector<vector<int> >& Vect)
{
	int str[Vect.size()];
	int number = Vect.size() - 1;
  int value = Vect[number].size();

	for(int i = 0; i < value; i++){
		str[i] = Vect[number][i];
  }

	for(int i = A.size() - 2; i >= 0; i--)
	{
		for(int j = 0; j < Vect[i].size(); j++)
			str[j] = Vect[i][j] + min(str[j], str[j + 1]);
	}

	return str[0];
}

int main()
{
	vector<vector<int> > Vect{ { 4 }, { 6, 18 }, { 3, 9, 13 } };
	cout << Smallest_sum(Vect);
	return 0;
}
