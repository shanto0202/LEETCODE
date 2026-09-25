#pragma once

// VS Code/MinGW compatibility header for LeetCode C++ solution files.
// This file is injected only for local IntelliSense and syntax checking.
#include <bits/stdc++.h>

using namespace std;

// LeetCode supplies these data structures on its judge, but keeps their
// definitions commented out in generated solution files. Local IntelliSense
// needs compatible definitions in order to understand their member fields.
struct ListNode {
    int val;
    ListNode* next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right)
        : val(x), left(left), right(right) {}
};

// A compatibility superset for the common LeetCode `Node` variants used by
// graphs, N-ary trees, random-pointer lists, perfect trees, and quad trees.
class Node {
public:
    int val;
    bool isLeaf;
    Node* left;
    Node* right;
    Node* next;
    Node* random;
    Node* prev;
    Node* child;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;
    vector<Node*> neighbors;
    vector<Node*> children;

    Node()
        : val(0), isLeaf(false), left(nullptr), right(nullptr), next(nullptr),
          random(nullptr), prev(nullptr), child(nullptr), topLeft(nullptr),
          topRight(nullptr), bottomLeft(nullptr), bottomRight(nullptr) {}

    Node(int value) : Node() {
        val = value;
    }

    Node(int value, vector<Node*> nodes) : Node(value) {
        neighbors = nodes;
        children = nodes;
    }

    Node(int value, Node* nextNode, Node* randomNode) : Node(value) {
        next = nextNode;
        random = randomNode;
    }

    Node(int value, Node* leftNode, Node* rightNode, Node* nextNode)
        : Node(value) {
        left = leftNode;
        right = rightNode;
        next = nextNode;
    }

    Node(bool value, bool leaf, Node* topLeftNode, Node* topRightNode,
         Node* bottomLeftNode, Node* bottomRightNode)
        : Node(static_cast<int>(value)) {
        isLeaf = leaf;
        topLeft = topLeftNode;
        topRight = topRightNode;
        bottomLeft = bottomLeftNode;
        bottomRight = bottomRightNode;
    }
};
