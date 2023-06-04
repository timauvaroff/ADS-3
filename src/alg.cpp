// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int count = 0;
    int low = 0;
    int high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == value) {
            count++;
            for (int i = mid - 1; i >= low; i--) {
                if (arr[i] == value)
                    count++;
                else
                    break;
            }
            for (int i = mid + 1; i <= high; i++) {
                if (arr[i] == value)
                    count++;
                else
                    break;
            }
            return count;
        }
        else if (arr[mid] < value) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return count;
}
