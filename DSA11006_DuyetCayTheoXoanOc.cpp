#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

struct Node{
	int val;
	Node *l, *r;
	Node(int x){
		val = x;
		l =  r = NULL;
	}
};

void makeNode(Node *root,int u, int v, char c){
	if(c == 'L'){
		root->l = new Node(v);
	}
	else root->r =new Node(v);
}

void insert(Node *root,int u, int v, char c){
	if(root == NULL) return;
	if(root->val == u){
		makeNode(root,u,v,c);
	}
	insert(root->l,u,v,c);
	insert(root->r,u,v,c);
}

void xoanOc(Node *root){
	stack<Node *> st1,st2;
	st1.push(root);
	while(!st1.empty() || !st2.empty()){
		while(!st1.empty()){
			Node *cur = st1.top();
			st1.pop();
			cout << cur->val << " ";
			if(cur->r != NULL) st2.push(cur->r);
			if(cur->l != NULL) st2.push(cur->l);
		}
		while(!st2.empty()){
			Node *cur = st2.top();
			st2.pop();
			cout << cur->val << " ";
			if(cur->l != NULL) st1.push(cur->l);
			if(cur->r != NULL) st1.push(cur->r);
		}
	}
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
			else{
				insert(root,u,v,c);
			}
		}
		xoanOc(root);
		cout << endl;
	}

}


