#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void show(Node *head)
{
    if (head == NULL)
        return;

    show(head->next);
    cout << head->val << " ";
}

int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    a->next = b;
    a->next->next = c; // b->next=c;

    show(a);

    return 0;
}