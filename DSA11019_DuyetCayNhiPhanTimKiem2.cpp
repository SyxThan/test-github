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
	if(node->val == key) return node;
	if(node->val < key) node->r = insert(node->r,key);
	else node->l = insert(node->l,key);
	return node;
}

void postOrder(Node *root){
	if(root == NULL) return;
	postOrder(root->l);
	postOrder(root->r);
	cout << root->val << " ";
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
		postOrder(root);
		cout << endl;
		

	}

}


