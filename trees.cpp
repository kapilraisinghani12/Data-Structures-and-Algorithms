#include <iostream>
#include <queue>
using namespace std;

class treeNode
{
    // creating a tree node - 
public:
    treeNode *left;
    int data;
    treeNode *right;
    treeNode(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

treeNode *buildTree(treeNode *root)
{
    // recursively building a tree
    cout << "enter data" << endl;  // data entered for a node
    int data;
    cin >> data;

    root = new treeNode(data); // new node created
    if (data == -1) // if data is -1, it is considered as null
    {
        return NULL;
    }

    cout << "enter left child data for parent " << data << endl;
    root->left = buildTree(root->left); // recursive call for left subchild
    cout << "enter right child data for parent " << data << endl;
    root->right = buildTree(root->right); // recursive call for right subchild

    return root;
}

void levelOrder(treeNode *root)// printing the tree level wise i.e in example =   1
{                                                                              // 3 7
    queue<treeNode *> q;                                                       // 4 5 2 6
    q.push(root);
    q.push(NULL);   // q - 1 NULL

    while (!q.empty())
    {
        treeNode *temp = q.front(); // store 1 in temp
        q.pop(); //pop 1

        if (temp == NULL) // now temp == null
        {
            cout << endl;  // print the rest in next line
            if (!q.empty()) // q = 3 7
            {
                q.push(NULL); // q = 3 7 null , therefore till null comes next time in front, it prints it in the same line. then it changes the line.
            }
        }

        else // goes first in else as example
        {
            cout << temp->data << " "; // print 1
            if (temp->left)
            {
                q.push(temp->left); // q- NULL 3
            }
            if (temp->right)
            {
                q.push(temp->right); // q - NULL 3 7
            }
        }
    }
}

int main()
{
    // 1 3 4 -1 -1 5 -1 -1 7 2 -1 -1 6 -1 -1
    treeNode *root = NULL; // creates a root node
    root = buildTree(root);// builds a tree recursively
    levelOrder(root);// prints the tree level wise
}