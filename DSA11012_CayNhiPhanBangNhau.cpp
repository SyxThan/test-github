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

void insert(Node *root,int u, int v, char c){
	if(root == NULL) return;
	if(root->val == u){
		makeNode(root,u,v,c);
	}
	insert(root->l,u,v,c);
	insert(root->r,u,v,c);
}

bool check(Node *root1,Node *root2){
	if(root1 == NULL && root2 == NULL) return true;
	if(root1 && root2){
		return (root1->val == root2->val) && check(root1->l,root2->l) && check(root1->r,root2->r);
	}
	return false;
}

int main(){
	cin.tie(0) -> sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		int n1,n2;
		cin >> n1;
		Node *root1 = NULL;
		Node *root2 = NULL;
		while(n1--){
			int u,v;
			char c;
			cin >> u >> v >> c;
			if(root1 == NULL){
				root1 = new Node(u);
				makeNode(root1,u,v,c);
			}
			else insert(root1,u,v,c);
		}
		cin >> n2;
		while(n2--){
			int u,v;
			char c;
			cin >> u >> v >> c;
			if(root2 == NULL){
				root2 = new Node(u);
				makeNode(root2,u,v,c);
			}
			else insert(root2,u,v,c);
		}
		if(check(root1,root2)) cout << 1 << endl;
		else cout << 0 << endl;
		

	}

}


