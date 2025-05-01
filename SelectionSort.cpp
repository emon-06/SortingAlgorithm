#include <iostream> //using vector 
#include <vector>
using namespace std;

void selectionSort(vector<int>& a) {
    int n = a.size();
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[minIndex])
                minIndex = j;
        swap(a[i], a[minIndex]);
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    selectionSort(a);
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    cout << '\n';
    return 0;
}
