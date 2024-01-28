#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

// insertion of data--->
node *buildTree(node *root)
{

    cout << "enter data:" << endl;
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }

    cout << "insert data in the left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "insert data in the right of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

void leveOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        cout << temp->data << " ";
        q.pop();

        if (temp->left)
        {
            q.push(temp->left);
        }
        if (temp->right)
        {
            q.push(temp->right);
        }
    }
}
void leveOrderTraversalSeperator(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
void inorder(node *root)
{
    node *temp = root;
    if (temp == NULL)
    {
        return;
    }
    inorder(temp->left);
    cout << temp->data << " ";
    inorder(temp->right);
}

void preorder(node *root){
    node* temp = root;
    if(temp == NULL){
        return;
    }

    cout<<temp->data<<" ";
    preorder(temp->left);
    preorder(temp->right);
}
void postorder(node *root){
    node* temp = root;
    if(temp == NULL){
        return;
    }

    postorder(temp->left);
    postorder(temp->right);
    cout<<temp->data<<" ";
}

int main()
{
    node *root = NULL;

    root = buildTree(root);
    // data - 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    cout << "Level Order Traversals without and with seperators -->";

    leveOrderTraversal(root); // this is nothing but bfs
    cout << endl;
    leveOrderTraversalSeperator(root);
    cout << "Inorder traversal is -> ";
    inorder(root);
    cout<<endl;
    cout << "preorder traversal is -> ";
    preorder(root);
    cout<<endl;
    cout << "postorder traversal is -> ";
    postorder(root);
    cout<<endl;
   
}
