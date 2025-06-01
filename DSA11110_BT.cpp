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
	else root->r = new Node(v);
}  


void insert(Node *root, int u, int v, char c){
	if (root == NULL) return;
	if(root->val == u){
		makeNode(root, u, v, c);
	}
	insert(root->l, u, v, c);
	insert(root->r, u, v, c);
} 

int height(Node*root){
	if(root == NULL) return 0;
	else return 1 + max(height(root->r),height(root->l));
}

void inOrder(Node *root){
	if(root == NULL) return;
	inOrder(root->l);
	cout << root->val << " ";
	inOrder(root->r);
}

void preOrder(Node *root){
	if(root == NULL) return;
	cout << root->val << " ";
	preOrder(root->l);
	preOrder(root->r);
}

void postOrder(Node *root){
	if(root == NULL) return;
	postOrder(root->l);
	postOrder(root->r);
	cout << root->val << " ";
}


void levelOrder(Node *root){
	queue<Node *> q;
	q.push(root);
	while(!q.empty()){
		Node *top = q.front();
		q.pop();
		cout << top->val <<  " ";
		if(top->l != NULL) q.push(top->l); 
		if(top->r != NULL) q.push(top->r); 
	}
}
void reserveBFS(Node *root){
	if(root == NULL) return;
	queue<Node *> q;
	q.push(root);
	stack<int> st;
	while(!q.empty()){
		Node *cur = q.front();
		q.pop();
		st.push(cur->val);
		if(cur->l) q.push(cur->l);
		if(cur->r) q.push(cur->r);
	}
	while(!st.empty()){
		cout << st.top() << " ";
		st.pop();
	}
}

int sumRightLeaf(Node *root, ll &sum){
	if(root == NULL) return 0;
	if(root->r && root->r->l == NULL && root->r->r == NULL) sum += root->r->val;
	sumRightLeaf(root->r,sum);
	sumRightLeaf(root->l,sum);
}


int countLeaf(Node *root){
	if(root == NULL){
		return 0;
	}
	if(root->l == NULL && root->r == NULL) return 1;
	return countLeaf(root->l) + countLeaf(root->r);
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
			int u,v;char c;
			cin >> u >> v >> c;
			if(root == NULL){
				root = new Node(u);
				makeNode(root,u,v,c);
			}
			else {
				insert(root,u,v,c);
			}
		}
		cout << "inOrder: ";
		inOrder(root);
		cout << endl;
		
		cout << "preOrder: ";
		preOrder(root);
		cout << endl;
		
		cout << "postOrder: ";
		postOrder(root);
		cout << endl;
		
		
		cout << "levelOrder: ";
		levelOrder(root);
		cout << endl;
		
		cout << "reserve:" << endl;
		reserveBFS(root);
		cout << endl;
	}

}


