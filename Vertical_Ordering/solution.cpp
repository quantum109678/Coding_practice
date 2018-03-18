#include <iostream>
 using namespace std;

 struct Node{

 	int val;
 	struct Node *left;
 	struct Node *right;
 	
 };

 Node* create_node(int data){

 	Node *temp=new Node;
 	temp->val=data;
 	temp->left=temp->right=NULL;
 	return temp;
 }

 void findMinMax(Node *root,int *min,int *max,int hd){

 	if(root==NULL)	return;

 	if(hd<*min)	*min=hd;

 	if(hd>*max) *max=hd;

 	findMinMax(root->left,min,max,hd-1);

 	findMinMax(root->right,min,max,hd+1);

 }

 void printVL(Node *node,int line_no,int hd){

 	if(node==NULL) return;

 	if(line_no==hd){

 		cout<<node->val<<" ";
 	}

 	printVL(node->left,line_no,hd-1);

 	printVL(node->right,line_no,hd+1);

 }

 void vertical_ordering(Node *root){

 	int min=0,max=0;

 	findMinMax(root,&min,&max,0);

 	for(int i=min;i<=max;i++){

 		printVL(root,i,0);

 		cout<<endl;
 	}

 }

 int main()
{

    Node *root = create_node(1);
    root->left = create_node(2);
    root->right = create_node(3);
    root->left->left = create_node(4);
    root->left->right = create_node(5);
    root->right->left = create_node(6);
    root->right->right = create_node(7);
    root->right->left->right = create_node(8);
    root->right->right->right = create_node(9);
 
    cout << "Vertical order traversal is \n";
    vertical_ordering(root);
 
    return 0;
}