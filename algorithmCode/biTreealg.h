//
// Created by 89674 on 2019/7/17.
//

#ifndef BASE_LEARN_BITREEALG_H
#define BASE_LEARN_BITREEALG_H

/**
 * 二叉树相关算法
 */

// 1. 二叉树的节点定义

#include <algorithm>
#include <iostream>
#include <stack>
#include <queue>

using  namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int x):data(x){}
};

// 2. 二叉树的深度计算，给定根节点

int computeDeep(Node * root){
    if(!root) return 0;
    int leftMax = computeDeep(root->left);
    int rightMax = computeDeep(root->right);

    return std::max(leftMax, rightMax)+1;
}

// 3. 先序遍历  -- 递归 和 非递归
void preSearch1(Node *root){
    if(!root){
        cout<<root->data<<endl;
        preSearch1(root->left);
        preSearch1(root->right);
    }
}

void preSearch2(Node *root){
    stack<Node*> ss;
    Node *n = root;
    while (n!= nullptr || !ss.empty()){
        while (n!= nullptr){
            cout<<n->data<<endl; // 先序查找该节点的值
            ss.push(n);
            n = n->left;
        }
        // 以上为找到了数的最左边，不再有左子树，于是出栈最后一个的右节点
        if (!ss.empty()){
            n = ss.top();
            ss.pop();
            n = n->right;
        }
    }
}

// 4. 二叉树的层次遍历
void levelSearch(Node* root){
    queue<Node*> qq;
    if(!root) return;
    qq.push(root);
    while (!qq.empty()){
        Node* n = qq.front();
        qq.pop();
        // 遍历该节点的值
        cout<<n->data<<endl;
        if (n->right) qq.push(n->right);
        if (n->left) qq.push(n->left);
    }
}





#endif //BASE_LEARN_BITREEALG_H
