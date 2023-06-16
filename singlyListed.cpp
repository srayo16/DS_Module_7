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

void print(Node *head)
{
    Node *tmp = head;

    while (tmp != NULL) // last er next ke detect korle ekta value kom ashto.. tai porer tay gesi jekhane null
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);

    // cout << (*a).val << endl;
    // cout << a->val << endl;

    a->next = b;
    b->next = c;

    // cout << a->next->val;
    // cout << a->next->next->val;
    print(a);
    return 0;
}