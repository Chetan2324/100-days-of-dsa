// LeetCode 146 - LRU Cache
// https://leetcode.com/problems/lru-cache/
// Design: HashMap + Doubly Linked List
// Time: O(1) get/put

#include <bits/stdc++.h>
using namespace std;

class LRUCache {
private:
    class Node {
    public:
        int key, val;
        Node* next;
        Node* prev;

        Node(int k, int v) {
            key = k;
            val = v;
            next = prev = NULL;
        }
    };

    unordered_map<int, Node*> mp;
    Node* head;
    Node* tail;
    int cap;

    // remove node from DLL
    void deleteNode(Node* node) {
        Node* p = node->prev;
        Node* n = node->next;

        p->next = n;
        n->prev = p;
    }

    // add node right after head (most recently used)
    void addNode(Node* node) {
        node->next = head->next;
        node->prev = head;

        head->next->prev = node;
        head->next = node;
    }

public:
    LRUCache(int capacity) {
        cap = capacity;

        head = new Node(-1, -1);
        tail = new Node(-1, -1);

        head->next = tail;
        tail->prev = head;
    }

    int get(int key) {
        if (mp.find(key) == mp.end())
            return -1;

        Node* node = mp[key];

        // move to front (most recently used)
        deleteNode(node);
        addNode(node);

        return node->val;
    }

    void put(int key, int value) {

        // if already exists → remove old
        if (mp.find(key) != mp.end()) {
            Node* node = mp[key];
            deleteNode(node);
            mp.erase(key);
        }

        // if full → remove LRU (tail->prev)
        if (mp.size() == cap) {
            Node* lru = tail->prev;
            mp.erase(lru->key);
            deleteNode(lru);
        }

        Node* newNode = new Node(key, value);
        addNode(newNode);
        mp[key] = newNode;
    }
};
