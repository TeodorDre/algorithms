#include <iostream>
#include <vector>

using namespace std;

int sum(vector<int> &elements) {
    if (elements.empty()) {
        return 0;
    }

    int res = elements.back();
    elements.pop_back();

    return res + sum(elements);
}

int main() {
    vector<int> numbers = {1, 2, 3, 4};

    cout << "Résultat de la fonction de nombres max: " << sum(numbers);

    return 0;
}
