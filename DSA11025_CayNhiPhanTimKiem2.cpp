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

Node *build(int a[], int l, int r){
	if(l > r) return NULL;
	int m = (l + r)/2;
	Node *root = new Node(a[m]);
	root->l = build(a,l,m-1);
	root->r = build(a,m+1,r);
	return root;
}
void pre(Node *root){
	if(root == NULL) return;
	cout << root->val << " ";
	pre(root->l);
	pre(root->r);
}
int main(){
	cin.tie(0) -> sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n+5];
		for(int i = 0;i < n;i++){
			cin >> a[i];
		}
		Node *root = build(a,0,n-1);
		pre(root);
		cout << endl;

	}

}


