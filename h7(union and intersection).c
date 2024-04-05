//UNION AND INTERSECTION
#include <stdio.h>
int main() {
    int m, n, i, j, c;
    scanf("%d %d", &m, &n);
    int a[m], b[n], u[m + n], t[m + n];
    for (i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
    int p = 0;
    for (i = 0; i < m; i++) {
        u[p] = a[i];
        p++;
    }
    int k = 0;
    for (j = 0; j < n; j++) {
        c = 1; 
        for (i = 0; i < m; i++) {
            if (b[j] == a[i]) {
                c = 0;
                t[k] = b[j];
                k++;
            }
        }
        if (c == 1) {
            u[p] = b[j];
            p++;
        }
    }
    for (i = 0; i < p; i++) {
        printf("%d ", u[i]);
    }
    printf("\n");
    for (i = 0; i < k; i++) {
        printf("%d ", t[i]); 
    }
    return 0;
}
// UNION AND INTERSECTION IN FUNCTION
#include <stdio.h>
void input(int size, int arr[]) {
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}
void merge(int m, int n, int a[], int b[], int u[], int t[]) {
    int p = 0, k = 0, c;
    for (int i = 0; i < m; i++) {
        u[p] = a[i];
        p++;
    }
    for (int j = 0; j < n; j++) {
        c = 1;
        for (int i = 0; i < m; i++) {
            if (b[j] == a[i]) {
                c = 0;
                t[k] = b[j];
                k++;
            }
        }
        if (c == 1) {
            u[p] = b[j];
            p++;
        }
    }
}
void print(int size, int arr[]) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int a[m], b[n], u[m + n], t[m + n];
    input(m, a);
    inputA(n, b);
    merge(m, n, a, b, u, t);
    print(m + n, u);
    print(m + n, t);
    return 0;
}
//UNION AND INTERSECTION IN POINTER
#include <stdio.h>
void input(int size, int *arr) {
    for (int i = 0; i < size; i++) {
        scanf("%d", arr + i);
    }
}
void merge(int m, int n, int *a, int *b, int *u, int *t) {
    int p = 0, k = 0, c;
    for (int i = 0; i < m; i++) {
        *(u + p) = *(a + i);
        p++;
    }
    for (int j = 0; j < n; j++) {
        c = 1;
        for (int i = 0; i < m; i++) {
            if (*(b + j) == *(a + i)) {
                c = 0;
                *(t + k) = *(b + j);
                k++;
            }
        }
        if (c == 1) {
            *(u + p) = *(b + j);
            p++;
        }
    }
}
void print(int size, int *arr) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}
int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int a[m], b[n], u[m + n], t[m + n];
    input(m, a);
    input(n, b);
    merge(m, n, a, b, u, t);
    print(m + n, u);
    print(m + n, t);
    return 0;
}
