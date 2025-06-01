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

void makeNode(Node *root, int u, int v, char c){
	if(c == 'L'){
		root->l = new Node(v);
	}
	else {
		root->r = new Node(v);
	}
}
void insert(Node *root, int u, int v, char c){
	if(root == NULL) return;
	if(root->val == u){
		makeNode(root,u,v,c);
	}
	insert(root->l,u,v,c);
	insert(root->r,u,v,c);
}

int height(Node *root){
	if(root == NULL) return 0;
	return 1 + max(height(root->l),height(root->r));
}

bool check(Node *root, int level, int h){
	if(root == NULL) return true;
	if(root->l == NULL && root->r == NULL && level < h)
		return false;
	return check(root->l,level + 1,h) && check(root->r,level + 1,h);
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
			int u, v; char c;
			cin >> u >> v >> c;
			if(root == NULL){
				root = new Node(u);
				makeNode(root,u,v,c);
			}
			else insert(root,u,v,c);
		}
		int h = height(root);
		if(check(root,1,h)) cout << 1;
		else cout << 0;
		cout << endl;

	}

}


