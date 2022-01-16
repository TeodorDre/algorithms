#include <iostream>
#include <vector>
#include <map>

using namespace std;

struct Man {
    string name = "Man";
    bool is_dating = false;
    vector<string> friends_name;
};

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

    return 0;
}
