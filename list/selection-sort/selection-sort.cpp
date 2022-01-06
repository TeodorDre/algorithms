#include <iostream>
#include <vector>

using namespace std;

int GetSmallestIndex(const vector<int> &elements) {
    int smallest_index = 0;
    int smallest_element = elements[0];

    for (int i = 1; i < elements.size(); i += 1) {
        if (elements[i] < smallest_element) {
            smallest_index = i;
            smallest_element = elements[i];
        }
    }

    return smallest_index;
}

vector<int> SelectionSort(vector<int> &elements) {
    if (elements.size() < 2) {
        return elements;
    }

    // We can create vector with specified size only in for/in loop
    // Nous pouvons créer un vecteur avec une taille spécifiée uniquement dans une boucle for/in
    unsigned long vector_size = elements.size();
    vector<int> new_vector(vector_size);

    for (int i = 0; i < vector_size; i++) {
        int smallest_index = GetSmallestIndex(elements);

        int elem = elements[smallest_index];
        new_vector[i] = elem;
        elements.erase(elements.begin() + smallest_index);
    }

    return new_vector;
}

int main() {
    vector<int> numbers = {15, 7, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 2};

    vector<int> sorted_numbers = SelectionSort(numbers);

    for (const auto &i: sorted_numbers) {
        cout << i << endl;
    }

    return 0;
}
