
int cal(int n)
{
	if (n < 2) {
		return n;
	}
	if (n == 1){
		return 1;
	}
	return cal(n - 1) + cal(n - 2);
}

int main()
{
	int i = 0;
	for (i = 1; i < 10; i ++) {
		printf("%d\n", cal(i));
	}
	return 0;
}
