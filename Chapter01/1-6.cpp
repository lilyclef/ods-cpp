#include<iostream>
#include<vector>
using namespace std;

template<class T>
class List {
    vector<T> content;
    void add(T val);
    void remove(T val);
    T get(int i);
    void set(int i, T val);
    bool contains(T val);
    int size();
};

template<class T>
class USet {
    vector<T> content;
    void add(T val);
    void remove(T val);
    T find(T val);
    int size();
};

template<class T>
class SSet {
    vector<T> content;
    void add(T val);
    void remove(T val);
    T find(T val);
    int size();
};
