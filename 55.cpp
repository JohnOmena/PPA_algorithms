#include <string.h>
#include <iostream>
using namespace std;

int str_lcs(int size_str1, int size_str2, char* str1, char* str2){

    int lcs[size_str1 + 1][size_str2 + 1];
    int final_value = 0;

    for (int i = 0; i <= size_str1; i++){

        for (int j = 0; j <= size_str2; j++){

            if (i == 0 || j == 0){
                lcs[i][j] = 0;
            }

            else if (str1[i - 1] == str2[j - 1]) {
                lcs[i][j] = lcs[i - 1][j - 1] + 1;
                final_value = max(final_value, lcs[i][j]);
            }
            else {
                lcs[i][j] = 0;
            }
        }
    }

    return final_value;
}

int main(){

    char str1[] = "oitudobem";
    char str2[] = "tudosimecomvc";
    int size_str1 = strlen(str1);
    int size_str2 = strlen(str2);

    cout << " LCS será "
         << str_lcs(size_str1, size_str2, str1, str2);
    return 0;
}
