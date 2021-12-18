
void sort(int a[ ], int n) {
	int i, j, temp;
	for (i=0; i<n; i++)
		for (j=i+1; j<n; j=j+1)
			if (a[i]<a[j]) {
				temp=a[i]; 
				a[i]=a[j]; 
				a[j]=temp;
			}
}

int main() {
	int a[4];
	int i;
	a[0] = 1;
	a[1] = 3;
	a[2] = 2;
	a[3] = 4;
	sort(a, 4);
	for (i = 0; i < 3; i++) {
		printf("%d ", a[i]);
	}

	return 0;
}
