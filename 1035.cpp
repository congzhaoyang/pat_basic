#include <iostream>
#include <algorithm>

using namespace std;

const int N = 111;
int origin[N], tempOri[N], changed[N];
int n;

bool isSame(int A[], int B[]) {
    for(int i = 0; i < n; i++) {
        if(A[i] != B[i]) {
            return false;
        }
    }
    return true;
}

bool showArray(int A[]) {
    for(int i = 0; i < n; i++) {
        cout << A[i];
        if(i < n - 1) cout << " ";
    }
}

bool insertSort() {
    bool flag = false;
    for(int i = 0; i < n; i++) {
        if(i != 1 && isSame(changed, tempOri)) {
            flag = true;
        }
        int temp = tempOri[i], j = i;
        while(j > 0 && tempOri[j - 1] > temp) {
            tempOri[j] = tempOri[j - 1];
            j--;
        }
        tempOri[j] = temp;
        if(flag == true) {
            return true;
        }
    }
    return false;
}

void mergeSort() {
    bool flag = false;
    for(int step = 2; step / 2 <= n; step *= 2) { // ÕâÀïÎªÉõstep/2 <= n;
        if(step != 2 && isSame(tempOri, changed)) {
            flag = true;
        }
        for(int i = 0; i < n; i += step) {
            sort(tempOri + i, tempOri + min(i + step, n));
        }
        if(flag == true) {
            showArray(tempOri);
            return;
        }
    }
}

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> origin[i];
        tempOri[i] = origin[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> changed[i];
    }
    if(insertSort()) {
        cout << "Insertion Sort" << endl;
        showArray(tempOri);
    } else {
        cout << "Merge Sort" << endl;
        for(int i = 0; i < n; i++) {
            tempOri[i] = origin[i];
        }
        mergeSort();
    }
    return 0;
}
