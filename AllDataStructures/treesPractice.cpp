#include<iostream>
#include<queue>
using namespace std;

class node{
   public:
   int data;
   node* left;
   node* right;

   node(int data){
    this->data = data;
    this->left = NULL;
    this->right = NULL;
   }

};
node *buildTree(node* root){
    //  cout<<"enter data:"<<endl;
    //  int data;
    //  cin>>data;
    //  root = new node(data);
    //  if(data == -1){
    //     return NULL;
    //  }

    //  cout<<"enter the element on the left of "<<data<<endl;
    //  root->left = buildTree(root->left);
    //  cout<<"enter the element on the right of "<<data<<endl;
    //  root->right = buildTree(root->right);

    //  return root;  
    cout<<"enter data:"<<endl;
    int data;
    cin>>data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }
    cout<<"enter data for the left of "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"enter data for the right of "<<data<<endl;
    root->right = buildTree(root->right);

    return root;


}

void leveOrderTraversal(node* root){
       queue<node*> q;
       q.push(root);
       q.push(NULL);

       while(!q.empty()){
          
          node* temp = q.front();
          q.pop();

          if(temp == NULL){
             cout<<endl;
             if(!q.empty()){
                q.push(NULL);
             }
          }
          else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
          }


       }
}

int main(){
   
   node* root = NULL;
   root = buildTree(root);
   
   buildTree(root);
   leveOrderTraversal(root);


}