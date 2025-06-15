#include<bits/stdc++.h>
using namespace std;
struct Node {
    int v;
    Node *l=0, *r=0, *p=0;
    Node(int x):v(x){}
};
void add(Node* &r, int x) {
    if(!r) {
        r = new Node(x);
        return;
    }
    Node *cur=r, *pre;
    while(cur) pre=cur, cur=(x<cur->v ? cur->l : cur->r);
    cur = new Node(x);
    cur->p = pre;
    (x<pre->v ? pre->l : pre->r) = cur;
}
void get(Node* n) {
    if(n==0) return;
    get(n->l);
    int d=1;
    int p=(n->p?n->p->v:0);
    int s=0;
    if(n->p) {
        if((n==n->p->l)&&(n->p->r)) s=n->p->r->v;
        if((n==n->p->r)&&(n->p->l)) s=n->p->l->v;
    }
    for(Node* t=n->p;t;t=(t->p)) d+=1;
    printf("%d %d %d %d %d %d\n",n->v,p,s,(n->l?n->l->v:0),(n->r?n->r->v:0),d);
    get(n->r);
}
int main() {
    int n,x; cin>>n;
    Node* r=0;
    while(n--) cin>>x, add(r,x);
    get(r);
}