/*
Kiểm tra ô đỉnh
Tạo một hàm is_peak để kiểm tra xem ô (i, j) có phải là đỉnh hay không. Một ô được coi là đỉnh nếu giá trị của nó lớn hơn tất cả các ô lân cận (các ô có chung một cạnh).

Ổn định ma trận
Tạo một hàm stabilize_matrix để thực hiện thuật toán ổn định ma trận.
Trong hàm này, bạn sẽ lặp lại việc tìm ô đỉnh và giảm giá trị của nó cho đến khi không còn ô nào là đỉnh nữa.
*/

#include <stdio.h>

#define MAX_N 100
#define MAX_M 100

int n, m;
int a[MAX_N][MAX_M];

// Hàm kiểm tra xem ô (i, j) có phải là lớn nhất trong các ô lân cận hay không
int is_peak(int i, int j) {
    int di[] = {-1, 1, 0, 0};
    int dj[] = {0, 0, -1, 1};
    for (int d = 0; d < 4; d++) {
        int ni = i + di[d];
        int nj = j + dj[d];
        if (ni >= 0 && ni < n && nj >= 0 && nj < m && a[ni][nj] >= a[i][j]) {
            return 0;
        }
    }
    return 1;
}

void stabilize_matrix() {
    while (1) {
        int peak_i = -1, peak_j = -1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (is_peak(i, j)) {
                    if (peak_i == -1 || i < peak_i || (i == peak_i && j < peak_j)) {
                        peak_i = i;
                        peak_j = j;
                    }
                }
            }
        }
        if (peak_i == -1) break;
        a[peak_i][peak_j]--;
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &n, &m);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d", &a[i][j]);
            }
        }
        stabilize_matrix();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
