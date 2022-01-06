#include <iostream>
#include <vector>

using namespace std;

int GetMaxNumber(vector<int> &elements) {
    if (elements.empty()) {
        return 0;
    }

    int min_number = elements.back();
    elements.pop_back();

    int max_number = GetMaxNumber(elements);

    return max_number > min_number ? max_number : min_number;
}

int main() {
    vector<int> numbers = {7, 2228, 3, 2, 555};

    cout << "Résultat de la fonction de nombres max: " << GetMaxNumber(numbers);

    return 0;
}
