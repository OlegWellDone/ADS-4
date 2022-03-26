// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
  int count;
  for (int i = 0; i < len - 1; i++) {
    for (int k = i + 1; k < len; k++) {
      if (arr[i] + arr[k] == value) {
        count = count + 1;
      }
    }
  }
  return count;
}

int countPairs2(int *arr, int len, int value) {
  int konec;
  int count = 0;
  konec = len - 1;
    while (arr[konec] > value) {
      konec = konec - 1;
    }
  for (int i = 0; i < konec - 1; i++) {
    for (int k = konec; k > i; k--) {
      if (arr[i] + arr[k] == value) {
        count = count + 1;
      }
    }
  }
      return count;
}

int cbinsearch(int *arr, int size, int value, int begin) {
  int i = begin;
  int j = size - 1;
  int k = 0;
  int mid = (j - 1) / 2;
    if (arr[j] == value) {
      k = k + 1;
    }
  while (arr[j] > value) {
    mid = (j - 1) / 2;
    if (arr[mid] == value) {
      k = k + 1;
      j = mid;
      break;
    } else {
     j = mid;
    }
  }
    i = 1;
    while ((arr[j + i] == value) && ((j + i) <= size)) {
      k = k + 1;
      i = i + 1;
      }
    i = 1;
      while ((arr[j - i] == value) && ((j - i) >= 0)) {
      k = k + 1;
      i = i + 1;
      }
  if (k != 0) {
    return k;
  } else {
  return 0;
  }
}

int countPairs3(int *arr, int len, int value) {
int count = 0;
  for (int i = 0; i < len; i++) {
  count = count +  cbinsearch(arr, len, value - arr[i], i);
  }
  return count;
}
