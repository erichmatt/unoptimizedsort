void shuffle(int arr[]) {
  for (int i = 0; i < arr.length; i++) {
    int t = arr[i];
    int r = int(random(arr.length));
    arr[i] = arr[r];
    arr[r] = t;
  }
}
