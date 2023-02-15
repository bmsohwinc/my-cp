#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

#define ll long long
#define ull unsigned long long

// FOR TIME
// high_resolution_clock::time_point t1 = high_resolution_clock::now();
// int ans = fibo(n);
// high_resolution_clock::time_point t2 = high_resolution_clock::now();

struct node {
    int key;
    struct node *left, *right;
};

struct node *new_node(int item) {
    struct node *temp = (struct node *) malloc(sizeof(struct node));
    temp -> key = item;
    temp -> left = temp -> right = NULL;
    return temp;
}

struct node *insert_node(struct node *root_node, int key) {
    if (root_node == NULL) {
        return new_node(key);
    }

    if (root_node -> key == key) {
        printf("[ E ] Key %2d already exists. Node not created.\n", key);
    }
    else if (key < root_node -> key) {
        root_node -> left = insert_node(root_node -> left, key);
    }
    else {
        root_node -> right = insert_node(root_node -> right, key);
    }

    return root_node;
}

void inorder(struct node *root) {
    if (root == NULL) {
        return;
    }

    inorder(root -> left);
    printf("%2d ", root -> key);
    inorder(root -> right);
}

struct node* search(struct node* root, int key) {
    while (root != NULL) {
        if (root -> key == key) {
            return root;
        }
        else if (key < root -> key) {
            root = root -> left;
        }
        else {
            root = root -> right;
        }
    }
    return root;
}

void search_util(struct node *root, int search_val) {
    struct node *s1 = search(root, search_val);
    if (s1 == NULL) {
        printf("Given key %2d does not exist in the BST\n", search_val);
    } else {
        printf("Found key: s1 -> key = %2d\n", s1 -> key);
    }
}

void right_view(struct node *root) {
    printf("RIGHT VIEW: ");
    unordered_map<int, int> mp;
    struct node *prev = NULL;
    queue<struct node*> q;
    q.push(root);

    while(!q.empty()) {
        struct node *curr = q.front();
        q.pop();

        if (curr == NULL) {
            break;
        }

        int level = 0;
        if (prev == NULL) {
            level = 0;
            mp[curr -> key] = 0;
        } else {
            level = mp[curr -> key];
            if (mp[prev -> key] != level) {
                printf("%2d ", prev -> key);
            }
        }

        if (curr -> left != NULL) {
            mp[curr -> left -> key] = level + 1;
            q.push(curr -> left);
        }

        if (curr -> right != NULL) {
            mp[curr -> right -> key] = level + 1;
            q.push(curr -> right);
        }

        prev = curr;
    }

    printf("%2d ", prev -> key);
    printf("\n");
}

void solve() {
    int n, x;
    cin >> n;

    struct node *root = NULL;

    for (int i = 0; i < n; i++) {
        cin >> x;
        root = insert_node(root, x);
    }

    printf("INORDER: ");
    inorder(root);
    cout << "\n";
    
    // search
    // search_util(root, 4);
    // search_util(root, 2);
    // search_util(root, 10);

    right_view(root);
    
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        // printf("Case #%d: ", i);
        solve();
    }
    return 0;
}
