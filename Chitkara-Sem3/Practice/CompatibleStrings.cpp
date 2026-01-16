#include <iostream>
using namespace std;

/*
Check if two strings are Compatible or not, by checking if the second string appears at the last
of the first string, strings may contain any valid ASCII characters
aditi_str = "Face", rohan_str = "ace" --> Compatible --> 1
aditi_str = "CodeQuotient", rohan_str = "ent" --> Compatible --> 1
aditi_str = "Hi!", rohan_str = "!" --> Compatible --> 1

*/

int areCompatible(string aditi_str, string rohan_str) {
    int a_size = aditi_str.size();
    int r_size = rohan_str.size();

    if (a_size < r_size) return 0;

    for (int i = 0; i < r_size; i++) {
        if (aditi_str[a_size - 1 - i] != rohan_str[r_size - 1 - i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    string aditi_str = "CodeQuotient";
    string rohan_str = "ent";
    cout << areCompatible(aditi_str, rohan_str) << endl;
}
