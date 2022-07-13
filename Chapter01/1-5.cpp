#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

template<class T>
class Bag {
private:
    unordered_map<T, vector<T>> mp;
public:
    Bag() = default;
    template<class T2>
    void add(T2&& x) {
        mp[x].push_back(x);
    };
    void remove(T& x);
    T find(T& x);
    vector<T> findAll(T& x);
};

template <typename T> void Bag<T>::remove(T& x) {
    if (mp.find(x) != mp.end()) {
        mp[x].remove(--mp[x].end());
        if (mp[x].size() == 0) mp.erase(x);
    }
}
template <typename T> T Bag<T>::find(T& x) {
    if (mp.find(x) != mp.end()) {
        return mp[x][0];
    }
    throw "not found";
}
template <typename T> vector<T> Bag<T>::findAll(T& x) {
    if (mp.find(x) != mp.end()) {
        return mp[x];
    }
    return {};
}

int main() {
    Bag<string> bag;
    vector<string> pos = {"lipstick", "mirror", "eyeshadow", "polish"};
    for (string& p : pos) {
        bag.add(p);
    }
    string word = "mirror";
    cout << bag.find(word) << endl;
}