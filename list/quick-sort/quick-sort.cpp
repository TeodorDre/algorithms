#include <iostream>
#include <vector>

using namespace std;

void PrintVector(const vector<int> &elements) {
    for (const auto &i: elements) {
        cout << i << endl;
    }
}

vector<int> QuickSort(vector<int> &elements) {
    if (elements.size() < 2) {
        return elements;
    }

    int first = elements.front();
    elements.erase(begin(elements));

    vector<int> less;
    vector<int> greater;

    for (const auto &el: elements) {
        if (el < first) {
            less.push_back(el);
        } else {
            greater.push_back(el);
        }
    }

    vector<int> final_vector;

    vector<int> sorted_less = QuickSort(less);
    vector<int> sorted_greater = QuickSort(greater);

    final_vector.insert(final_vector.end(), sorted_less.begin(), sorted_less.end());
    final_vector.push_back(first);
    final_vector.insert(final_vector.end(), sorted_greater.begin(), sorted_greater.end());

    return final_vector;
}

int main() {
    vector<int> numbers = {3, 5, 2, 1, 4};

    vector<int> sorted_numbers = QuickSort(numbers);

    PrintVector(sorted_numbers);

    return 0;
}
