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
  i = 0;
  j = len - 1;
  k = 0;
  mid = (j - 1) / 2;
  while (arr[j] > value1) {
    mid = (j - 1) / 2;
    if (arr[mid] == value1) {
      k = k + 1;
      j = mid;
      break;
    } else {
     j = mid;
    }
  }
    i = 1;
    while ((arr[j + i] == value1) && ((j + i) <= len)) {
      k = k + 1;
      i = i + 1;
      }
    i = 1;
      while ((arr[j - i] == value1) && ((j - i) >= 0)) {
      k = k + 1;
      i = i + 1;
      }
    nachalo = nachalo + 1;
  }
  return k;
}
