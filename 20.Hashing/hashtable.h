

#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Node
{
    string Key;
    T value;
    Node *next;
    Node(string key, T value) : key(key), value(value)
    {
        next = NULL;
    }
};

// Class Hashtable
template <typename T>
class Hashtable
{
    int cs;
    int ts;
    Node<T> **table;
    int hashFxn(string key)
    {
        int idx = 0;
        int power = 1;
        for (auto x : key)
        {
            idx = (idx + x * pow) % ts;
            power = (power * 29) % ts;
        }
        return idx;
    }

public:
    Hashtable(int ds = 0)
    {
        cs = 0;
        ts = ds;
        table = new Node<T> *[ts];
        for (int i = 0; i < ts; i++)
        {
            table[i] = NULL;
        }
    }

    void insert(string key, T val)
    {
        int idx = hashfxn(key);
        // make A new Node
        Node<T> *n = new Node<T>(key, val);
        // if bucket is empty

        n->next = table[idx];
        table[idx] = n; // Table[idx] store address O f new Node !!!
    }
};