//creating a binary search tree
#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node* left;
	node* right;
};

struct node* newnode(int data)
{
	struct node* node=(struct node*)malloc(sizeof(struct node));
	node->data= data;
	node->left=node->right=NULL ;
	return node;
}

struct node* insert(struct node* root,int data)
{
	if(root==NULL)
	{
		return newnode(data);
	}
	if(root->data>data)
	{
		root->left= insert(root->left,data);
	}
	else
		root->right= insert(root->right,data);
	return root;
}

void inorder(struct node* root)
{
	if(root==NULL)
		return;
	
	inorder(root->left);
	cout<<root->data<<' ';
	inorder(root->right);
			
}
//int t=0;
void kth(struct node* root,int k)
{
//	t++;
	if(root==NULL)
	return;
	//cout<<k<<endl;
	if(k==0)
	{
		cout<<root->data<<' ';
		
	}

	kth(root->left,k-1);
	kth(root->right,k-1);
			
}
int main()
{
	struct node* root= NULL;
	root=insert(root,50);
	insert(root,70);
	insert(root,780);
	insert(root,702);insert(root,720);insert(root,781);
	insert(root,712);insert(root,722);insert(root,782);
	inorder(root);
	cout<<endl;
	kth(root,4);
}









