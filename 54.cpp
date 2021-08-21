#include<iostream>
#include<climits>
using namespace std;

int max_sum(int size_sequence, int sequence[]){

	int max_number = INT_MIN, max_number_end = 0;

	for (int i = 0; i < size_sequence; i++){

		max_number_end = max_number_end + sequence[i];

    if (max_number < max_number_end){
			max_number = max_number_end;
    }

		if (max_number_end < 0){
			max_number_end = 0;
    }

	}

	return max_number;
}

int main(){

	int sequence[] = {5, 15, -30, 10, -5, 40, 10};
	int size_sequence = sizeof(sequence)/sizeof(sequence[0]);
	int max_sum = max_sum(number, size_sequence);

  cout << "Soma equivale a " << max_sum;

  return 0;

}
