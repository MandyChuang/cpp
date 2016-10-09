// 5 4 3 2 1

// j = 0 ~ 3
// 4 5 3 2 1
// 4 3 5 2 1
// 4 3 2 5 1
// 4 3 2 1 5 

// j = 0 ~ 2
// 3 4 2 1 5
// 3 2 4 1 5
// 3 2 1 4 5

// j = 0 ~ 1
// 2 3 1 4 5
// 2 1 3 4 5

// j = 0 ~ 0
// 1 2 3 4 5

int n = 5;
bool hasSwap = true;

for(int i = 0; i < n-1 && hasSwap; i++) {
	hasSwap = false;
	for(j = 0; j < n-i-1; j++)
		if(arr[j] > arr[j+1]) {
			hasSwap = true;
			swap(arr[j], arr[j+1]);
		}
}

for(int i=n-1; i>=0; i--)
	for(int j=0; j<i; j++)
		if(arr[j] > arr[j+1])
			swap(arr[j], arr[j+1]);
