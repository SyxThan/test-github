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
// Them mot not vao ben trai hoac ben phai node goc
void makeNode(Node *root, int u, int v, char c){
	if(c == 'L'){
		root->l = new Node(v);		
	}
	else if(c == 'R'){
		root->r = new Node(v);
	}
}
// Ham them 1 node vao cay : Tim node can them roi goi ham makeNode
void insert(Node *root, int u, int v, char c){
	if(root == NULL) return;
	if(root->val == u){
		makeNode(root,u,v,c);
	}
	insert(root->l, u, v, c);
	insert(root->r, u, v, c);
	
}
// Kiem tra chieu cao (muc cua cay)
int height(Node *root){
	if(root == NULL) return 0;
	return 1 + max(height(root->l) , height(root->r));
}

bool check(Node *root, int level, int height){
	if(root == NULL) return true;
	if(root->l == NULL && root->r == NULL && level < height){
		return false;
	}
	return true;
}
// 3 thu tu duyet

// Giua
void inOrder(Node *root){
	if(root == NULL) return;
	inOrder(root->l);
	cout << root->val;
	inOrder(root->r);
}
// Truoc
void preOrder(Node*root){
	if(root == NULL) return;
	cout << root->val;
	preOrder(root->l);
	preOrder(root->r);
}
// Sau
void postOrder(Node*root){
	if(root == NULL) return;
	postOrder(root->l);
	postOrder(root->r);
	cout << root->val;
}
// Muc
void BFS(Node *root){
	if(root == NULL){
		return;
	}
	queue<Node *> q;
	q.push(root);
	while(!q.empty()){
		Node *cur = q.front();
		q.pop();
		cout << cur->val << " ";
		if(cur->l != NULL) q.push(cur->l);
		if(cur->r != NULL) q.push(cur->r);
		
	}
}
// Muc Nguoc


void reserveBFS(Node *root){
	if(root == NULL) return;
	queue<Node *> q;
	stack<int> st;
	while(!q.empty()){
		Node *cur = q.front();
		q.pop();
		st.push(cur->val);
		if(cur->l) q.push(cur->l);
		if(cur->r) q.push(cur->r);
	}
}


// Xoan Oc
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
			int u,v; char c;
			cin >> u >> v >> c;
			if(root == NULL){
				// Tao node goc root = u : node cha
				root = new Node(u);
				makeNode(root, u, v, c);
			}
			else{
				insert(root, u, v, c);
			}
		}
		BFS(root);
		cout << endl;
	}

}


