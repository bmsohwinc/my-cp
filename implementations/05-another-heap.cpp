// realizing heap data structure and heap sort algorithm

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second


// The heap
int hs = 0;
int arr[1000];


void display_choices() {
    printf("\n====================\n");
    printf("What do you want to do with the max heap?\n");
    printf("Type 1 to insert element\n");
    printf("Type 2 to get max element\n");
    printf("Type 3 to extract max element\n");
    printf("Type 4 to decrease an element\n");
    printf("Type 5 to delete element\n");
    printf("Type 6 to print the heap\n");
    printf("Type 7 to sort the heap\n");
    printf("Type 0 to exit program\n");
    printf("\n====================\n");
}


void print_heap() {

    if (hs == 0) {
        cout << "Heap is empty. Can't perform this action.\n";
        return;
    }

    for (int i = 0; i < hs; i++) {
        cout << arr[i] << " ";
    }

    cout << "\n";
}


void heapify(int idx) {
    int left = 2 * idx + 1;
    int right = 2 * idx + 2;
    int larger = idx;

    if (left < hs and arr[larger] < arr[left]) {
        larger = left;
    }

    if (right < hs and arr[larger] < arr[right]) {
        larger = right;
    }

    if (larger == idx) {
        return;
    }

    int t = arr[idx];
    arr[idx] = arr[larger];
    arr[larger] = t;

    heapify(larger);
}


void insert_element() {
    cout << "Enter the element to insert: \t";
    int new_el = 0;
    cin >> new_el;

    arr[hs] = new_el;
    hs++;

    int idx = hs - 1;

    while (idx > 0) {
        int par_idx = (idx - 1) / 2;
        if (arr[par_idx] < arr[idx]) {
            int t = arr[par_idx];
            arr[par_idx] = arr[idx];
            arr[idx] = t;
        } else {
            break;
        }
        idx = par_idx;
    }

    cout << "New element inserted successfully at idx = " << idx << "\n";
}


void get_max_element() {
    if (hs == 0) {
        cout << "Heap is empty. Can't perform this action.\n";
        return;
    }
    cout << "Max element of the max-heap is: " << arr[0] << "\n";
}


void extract_max_element() {
    if (hs == 0) {
        cout << "Heap is empty. Can't perform this action.\n";
        return;
    }
    
    int mx_element = arr[0];
    int t = arr[0];
    arr[0] = arr[hs - 1];
    arr[hs - 1] = t;

    hs--;

    heapify(0);
}


void decrease_element() {
    cout << "Enter index and new value: ";
    int idx, val;
    cin >> idx >> val;

    if (idx < 0 or idx >= hs) {
        cout << "Invalid index.\n";
        return;
    }

    int old_val = arr[idx];
    arr[idx] = val;

    heapify(idx);
}


void delete_element() {
    cout << "Enter index to delete: ";
    int idx;
    cin >> idx;

    if (idx < 0 or idx >= hs) {
        cout << "Invalid index.\n";
        return;
    }

    arr[idx] = arr[hs - 1];
    hs--;

    heapify(idx);
}


void sort_heap() {
    if (hs == 0) {
        cout << "Heap is empty. Cannot perform the action.\n";
        return;
    }

    int n = hs;
    for (int i = n - 1; i >= 0; i--) {
        int t = arr[i];
        arr[i] = arr[0];
        arr[0] = t;

        hs--;

        heapify(0);
    }

    hs = n;
}


void solve() {
    while (1) {
        display_choices();

        int choice;
        cin >> choice;
        switch (choice) {
            case 0:
                printf("Program terminated.\n");
                exit(0);
                break;
            
            case 1:
                insert_element();
                break;

            case 2:
                get_max_element();
                break;

            case 3:
                extract_max_element();
                break;

            case 4:
                decrease_element();
                break;

            case 5:
                delete_element();
                break;

            case 6:
                print_heap();
                break;
            
            case 7:
                sort_heap();
                break;

            default:
                printf("Unkown input. No action performed.\n");
                break;
            }
    }
}

int main() {
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}

