#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<random>

using namespace std;

void print_inputs(vector<string>& inputs) {
    for (int i = inputs.size() - 1; i >= 0; i--) {
        cout << inputs[i] << endl;
    }
}

void func111() {
    string line;
    vector<string> inputs;
    while (getline(cin, line)) {
        if (line == "") break;
        inputs.push_back(line);
    }
    print_inputs(inputs);

}

void func112() {
    string line;
    vector<string> inputs;
    int count = 0;
    while (getline(cin, line)) {
        if (line == "") {
            print_inputs(inputs);
            break;
        }
        inputs.push_back(line);
        count++;
        if (count == 50) {
            print_inputs(inputs);
            inputs.clear();
            count = 0;
        }
    }
}


void func113(int d) {
    string line;
    vector<string> inputs(d, "");
    int count = 0;
    while (getline(cin, line)) {
        if (count >= d && line == "") {
            cout << count << " " << (count - d) % d << endl;
            cout << inputs[(count - d) % d] << endl;
            break;
        }
        if (line == "") {
            break;
        }
        inputs[count % d] = line;
        count++;
    }
}


void func114() {
    string line;
    set<string> inputs;
    while (getline(cin, line)) {
        if (line == "") break;
        if (inputs.find(line) == inputs.end()) {
            inputs.insert(line);
            cout << line << endl;
        }
    }
}

void func115() {
    string line;
    set<string> inputs;
    while (getline(cin, line)) {
        if (line == "") break;
        if (inputs.find(line) == inputs.end()) {
            inputs.insert(line);
        } else {
            cout << line << endl;
        }
    }
}

void func116() {
    string line;
    set<string> inputs;
    while (getline(cin, line)) {
        if (line == "") break;
        inputs.insert(line);
    }
    for (auto iter = inputs.begin(); iter != inputs.end(); iter++) {
        cout << *iter << endl;
    }
}

void func117() {
    string line;
    map<string, int> inputs;
    while (getline(cin, line)) {
        if (line == "") break;
        inputs[line]++;
    }
    for (auto iter = inputs.begin(); iter != inputs.end(); iter++) {
        cout << iter->first << " " << iter->second << endl;
    }
}

void func118() {
    int count = 0;
    string line;
    vector<string> odd, even;
    while (getline(cin, line)) {
        if (line == "") break;
        if (count % 2) odd.push_back(line);
        else even.push_back(line);
        count++;
    }
    for (string& e : even) {
        cout << e << endl;
    }
    for (string& o : odd) {
        cout << o << endl;
    }
}

void func119() {
    string line;
    vector<string> inputs;
    while (getline(cin, line)) {
        if (line == "") break;
        inputs.push_back(line);
    }
    std::random_device get_rand_dev;
    std::mt19937_64 get_rand_mt(get_rand_dev());
    std::shuffle(inputs.begin(), inputs.end(), get_rand_mt);
    for (string& s : inputs) {
        cout << s << endl;
    }
}

int main () {
    // func111();
    // func112();
    // func113(42);
    // func114();
    func119();
}