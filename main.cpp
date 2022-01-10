#include <iostream>
#include <vector>

using namespace std;

void PrintVector(const vector<int> &elements) {
    for (const auto &i: elements) {
        cout << i << endl;
    }
}

int main() {
    return 0;
}
