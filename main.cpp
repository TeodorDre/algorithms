#include <iostream>
#include <vector>
#include <map>

using namespace std;

struct Man {
    string name = "Man";
    bool is_dating = false;
    vector<string> friends_name;
};

Man FindDatingMan(const map<string, Man> &friends) {
    vector<int> queue = {};

    const Man &man = friends.at("andrew");
    cout << man.name << endl;

    while (!queue.empty()) {

    }

    return {};
}

int main() {
    map<string, Man> friends;

    friends["andrew"] = {
            "andrew",
            false,
            {"alice", "bob", "claire"}
    };

    friends["bob"] = {
            "bob",
            false,
            {"anuj", "peggy"}
    };

    friends["alice"] = {
            "alice",
            false,
            {"peggy"}
    };

    friends["claire"] = {
            "claire",
            false,
            {"thom", "johny"}
    };

    friends["anuj"] = {
            "anuj",
            false,
            {"andrew"}
    };

    friends["johny"] = {
            "johny",
            false,
            {}
    };

    friends["thom"] = {
            "thom",
            false,
            {}
    };

    friends["peggy"] = {
            "peggy",
            true,
            {}
    };

    FindDatingMan(friends);

    return 0;
}
