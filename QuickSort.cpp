#include <iostream>

using namespace std;

int partition(int a[], int l, int u)
{
    int v, i, j, temp;
    v = a[l];
    i = l;
    j = u + 1;

    do
    {
        do
            i++;

        while (a[i] < v && i <= u);

        do
            j--;
        while (v < a[j]);

        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    } while (i < j);

    a[l] = a[j];
    a[j] = v;

    return (j);
}
void quick_sort(int a[], int l, int u)
{
    int j;
    if (l < u)
    {
        j = partition(a, l, u);
        quick_sort(a, l, j - 1);
        quick_sort(a, j + 1, u);
    }
}

int main()
{
    int a[50], n, i;
    cout << "----------------------------------";
    cout << "\nQuick sort" << endl;
    cout << "\nEnter the number of elements: ";
    cin >> n;
    cout << "\nEnter array elements: ";

    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << "\nArray before sorting: ";

    for (i = 0; i < n; i++)
        cout << a[i] << " ";

    quick_sort(a, 0, n - 1);
    cout << "\nArray after sorting: ";

    for (i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << "\n----------------------------------";

    return 0;
}
