#include<bits/stdc++.h>
#define ll long long
#define limit 1000000

using namespace std;

struct Node{
	int val;
	Node *l, *r;
	Node(int x){
		val = x;
		l = r = NULL;
	}
};

Node *insert(Node *node, int key){
	if(node == NULL) return new Node(key);
	if(node->val < key) node->r = insert(node->r,key);
	else node->l = insert(node->l,key);
	return node;
}

void preOrder(Node *root){
	if(root == NULL) return;
	cout << root->val << " ";
	preOrder(root->l);
	preOrder(root->r);
}


int main(){
	cin.tie(0) -> sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n+5];
		for(int i = 1;i <= n;i++){
			cin >> a[i];
		}
		Node *root = NULL;
		for(int i = 1;i <= n;i++){
			root = insert(root,a[i]);
		}
		preOrder(root);
		cout << endl;
	}

}


