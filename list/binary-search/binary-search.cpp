#include <iostream>
#include <vector>

using namespace std;

int GetBinarySearchIndex(const vector<int> &elements, const int &element) {
    int low = 0;
    int high = elements.size() - 1;

    while (high >= low) {
        int middle_index = (low + high) / 2;
        int guess = elements[middle_index];

        if (guess == element) {
            return middle_index;
        }

        if (guess > element) {
            high = middle_index - 1;
        } else {
            low = middle_index + 1;
        }
    }

    return -1;
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};

    int index = GetBinarySearchIndex(numbers, 15);

    if (index != -1) {
        cout << "Résultat de la fonction index de recherche binaire: " << index << endl;
    }

    return 0;
}
