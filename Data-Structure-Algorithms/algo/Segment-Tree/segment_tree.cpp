#include <iostream>
#include <climits>
using namespace std;

/// Arrays
int arr[] = {4, 9, 2, 4, 2, 9, 3, 7, 8, 0, 5, 3, 9};

struct node {
    int st, ed;     
    int mn;         
    node *l, *r;    

    node() {}
    node(int _x, int _y) {
        st = _x;
        ed = _y;
        l = r = nullptr;
        mn = INT_MAX;
    }
};


void build(node* nod) {
    if (nod->st == nod->ed) {  
        nod->mn = arr[nod->st];
        return;
    }
    int mid = (nod->st + nod->ed) / 2;
    nod->l = new node(nod->st, mid);
    nod->r = new node(mid + 1, nod->ed);

    build(nod->l);
    build(nod->r);

    nod->mn = min(nod->l->mn, nod->r->mn);
}


void update(node* nod, int ind, int val) {
    if (nod->st == nod->ed) {
        nod->mn = val;
        return;
    }
    int mid = (nod->st + nod->ed) / 2;
    if (ind <= mid)
        update(nod->l, ind, val);
    else
        update(nod->r, ind, val);

    nod->mn = min(nod->l->mn, nod->r->mn);
}


int query(node* nod, int x, int y) {
    if (nod->st == x && nod->ed == y) return nod->mn;

    int mid = (nod->st + nod->ed) / 2;
    if (y <= mid) return query(nod->l, x, y);       
    else if (x > mid) return query(nod->r, x, y);   
    else {  
        int a = query(nod->l, x, mid);
        int b = query(nod->r, mid + 1, y);
        return min(a, b);
    }
}

int main() {
    int n = sizeof(arr)/sizeof(arr[0]);
    node* root = new node(0, n - 1);

    build(root);

    cout << "Initial Queries:\n";
    cout << "query(1,1) = " << query(root, 1, 1) << " (expected 9)\n";
    cout << "query(1,10) = " << query(root, 1, 10) << " (expected 0)\n";
    cout << "query(2,8) = " << query(root, 2, 8) << " (expected 2)\n";
    cout << "query(10,12) = " << query(root, 10, 12) << " (expected 3)\n";

    cout << "\nUpdate: arr[2] = 100\n";
    update(root, 2, 100);

    cout << "After update, query(0,4) = " << query(root, 0, 4) << " (expected 2)\n";

    return 0;
}

/*
Array: 4 9 2 4 2 9 3 7 8 0 5 3 9
*/