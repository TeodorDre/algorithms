#include <iostream>
#include <vector>

using namespace std;

vector<int> QuickSort(vector<int> &elements) {
    return elements;
}

int main() {
    vector<int> numbers = {15, 7, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 2};

    vector<int> sorted_numbers = QuickSort(numbers);

    for (const auto &i: sorted_numbers) {
        cout << i << endl;
    }

    return 0;
}
