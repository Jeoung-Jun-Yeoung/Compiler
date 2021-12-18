
int main() { 
	int a = 100;
	int *b =&a; 
	int **c = &b;
	printf("%d, %d", *b, **c);
	return 0;
}
