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
  nachalo = 0;
  for (konec = len; konec > ((len/2) - 1); konec--) {
    if (arr[nachalo] + arr[konec] > value) {
      nachalo = nachalo + 1;
    } else if (arr[nachalo] + arr[konec] <= value) {
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
  return 0;
}
