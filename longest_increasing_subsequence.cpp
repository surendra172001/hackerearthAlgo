int longestIncreasingSubsequence(int *arr, int n) {
	int length = 1;
  int aux[n];
	aux[0] = arr[0];
	for(int i = 1; i < n; i++) {
		if(arr[i] < aux[0]) {
			aux[0] = arr[i];
		} else if(arr[i] > aux[length-1]) {
			aux[length++] = arr[i];
		} else {
			int s = 0, e = length-1, key = arr[i], pos;
			while(s <= e) {
				int mid = s+(e-s)/2;
				if(key <= aux[mid]) {
					e = mid-1;
				} else {
					pos = mid;
					s = mid+1;
				}
			}
			aux[pos+1] = arr[i];
		}
	}
	return length;
}
