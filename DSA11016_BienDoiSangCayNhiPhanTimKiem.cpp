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

void inOrder(Node *root){
	if(root == NULL) return;
	inOrder(root->l);
	cout << root->val << " ";
	inOrder(root->r);
}

int main(){
	cin.tie(0) -> sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		set<int> se;
		int m;
		int a[m+5];
		Node *root = NULL;
		while(n--){
			int u , v;
			char c;
			cin >> u >> v >> c;
			se.insert(u);
			se.insert(v);
		}
		
		for(int it : se){
			root = insert(root,it);
		}
		inOrder(root);
		cout << endl;
	}

}


