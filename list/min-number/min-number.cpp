#include <iostream>
#include <vector>

using namespace std;

int GetMinNumber(vector<int> &elements) {
    if (elements.size() == 1) {
        return elements.back();
    }

    int max_number = elements.back();
    elements.pop_back();
    int min_number = GetMinNumber(elements);

    return min_number < max_number ? min_number : max_number;
}

int main() {
    vector<int> numbers = {7, 2228, 3, 2, 555};

    cout << "Résultat de la fonction de nombres min: " << GetMinNumber(numbers);

    return 0;
}
