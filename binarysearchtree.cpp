#include<iostream>
using namespace std;
struct node{
	int data;
	node *left;
	node *right;
	
};
node *root='\0';
node * insert(node *p,int key)
{ 
  if(p=='\0')
  {
  	p=new node;
  	p->data=key;
  	p->left=p->right='\0';
  	return p;
  }
else if(p->data>key)
{
	p->left=insert(p->left,key);
}
else if(p->data<key)
{
	p->right=insert(p->right,key);
}
 
	
}
void inorder(node *t)
{   if(t)
{
	inorder(t->left);
	cout<<t->data<<" ";
	inorder(t->right);
}
}
int search(node *p,int key)
{   if(p)
{
	 if( p->data==key)
	 return 1;
	 else if(p->data>key)
	 {
	 	return (search(p->left,key));
	 }
	 else if(p->data<key)
	 {
	 	return(search(p->right,key));
	 }
}
else
return 0;
}
int main()
{  
root=insert(root,10);
insert(root,79);
insert(root,56);
inorder(root);
cout<<endl;
if(search(root,56))
cout<<"found";
else
cout<<"not found";
	
}
