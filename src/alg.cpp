// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    bool flag = false;
    int l = 0;
    int r = size - 1;
    int count = 0;
    int mid;
    while (flag != true) {
        mid = (l + r) / 2;
        if (arr[mid] == value) {
            int a = mid;
            while (arr[a] == value) {
                count++;
                a--;
            }
            while (arr[mid + 1] == value) {
                count++;
                mid++;
            }
            flag = true;
        }
        if (arr[mid] > value) {
            r = mid;
        }
        else 
            l = mid;
        if (l == mid && mid == (r - 1))
            break;
    }
    return count;
}
