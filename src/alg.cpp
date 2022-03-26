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
  int i, j, k, nachalo, value1, count;
  nachalo = 0;
  k = 0;
  value1 = value - arr[nachalo];
  i = nachalo;
  j = len - 1;
    while (i < j) {
        int mid = i + (j - i) / 2;
        if (arr[mid] == value1)
            k = mid;
        else if (arr[mid] > value1)
            j = mid;
        else
            i = mid + 1;
    }
      while (arr[k + 1] == value1) {
        k = k + 1;
     }
  i = nachalo;
  j = k - 1;
  count = 0;
  mid = (j - 1) / 2;
  for (arr[nachalo] < value; nachalo == (k - 1); nachalo++) {
    value1 = value - arr[nachalo];
    if (arr[j] == value1) {
      count = count + 1;
    }
  while (arr[j] > value1) {
    mid = (j - 1) / 2;
    if (arr[mid] == value1) {
      count = count + 1;
      j = mid;
      break;
    } else {
     j = mid;
    }
  }
    i = 1;
    while ((arr[j + i] == value1) && ((j + i) <= k)) {
      count = count + 1;
      i = i + 1;
      }
    i = 1;
      while ((arr[j - i] == value1) && ((j - i) >= 0)) {
      count = count + 1;
      i = i + 1;
      }
}
  if (count != 0) {
    return count;
  } else {
  return 0;
  }
}
