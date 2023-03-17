// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    bool flag = false;
    int l = arr[0];
    int r = arr[size - 1];
    int count = 0;
    while (flag != true) {
        int mid = (l + r) / 2;
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
        else l = mid;
        if (count == 0) {
            flag = true;
        }
    }
    return count;
    return 0; // если ничего не найдено
}
