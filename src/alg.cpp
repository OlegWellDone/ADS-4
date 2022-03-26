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
  int konec, nachalo;
  int count;
  konec = len;
  for (nachalo = 0; nachalo > ((len/2) - 1); nachalo--) {
    while (arr[nachalo] + arr[konec] > value) {
      konec = konec - 1;
      break;
    }
  }
  for (int i = nachalo; i < konec - 1; i++) {
    for (int k = i + 1; k < konec; k++) {
      if (arr[i] + arr[k] == value) {
        count = count + 1;
      }
    }
  }

  return count;
}
int countPairs3(int *arr, int len, int value) {
  int i, j, k, mid, nachalo, value1;
  nachalo = 0;
  while (arr[nachalo] < value) {
    value1 = value - arr[nachalo];
    if (value1 > 0) {
  i = 0;
  j = len - 1;
  k = 0;
  mid = (j - 1) / 2;
    while (i < j) {
        int mid = i + (j - i) / 2;
        if (arr[mid] == value1)
            k = k + 1;
        else if (arr[mid] > value1)
            j = mid;
        else
            i = mid + 1;
     }
    }
    nachalo = nachalo + 1;
  }
  return k;
}
