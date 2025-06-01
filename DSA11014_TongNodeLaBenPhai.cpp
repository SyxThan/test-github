#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

struct Node{
	int val;
	Node *l,*r;
	Node(int x){
		val = x;
		l = r = NULL;
	}
};

void makeNode(Node *root,int u, int v, char c){
	if(c == 'L'){
		root->l = new Node(v);
	}
	else root->r = new Node(v);
}

bool insert(Node *root, int u, int v, char c){
	if (root == NULL) return false;
	if (root->val == u){
		makeNode(root, u, v, c);
		return true;
	}
	return insert(root->l, u, v, c) || insert(root->r, u, v, c);
}

void sumRightLeaf(Node *root, int &sum){
	if(root == NULL) return;
	if(root->r != NULL && root->r->l == NULL && root->r->r == NULL){
		sum += root->r->val;
	}
	sumRightLeaf(root->r,sum);
	sumRightLeaf(root->l,sum);
}


int main(){
	cin.tie(0) -> sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		Node *root = NULL;
		while(n--){
			int u,v;
			char c;
			cin >> u >> v >> c;
			if(root == NULL){
				root = new Node(u);
				makeNode(root,u,v,c);
			}
			else {
				insert(root,u,v,c);
			}
		}
		int sum = 0;
		sumRightLeaf(root,sum);
		cout << sum << endl;

	}

}


