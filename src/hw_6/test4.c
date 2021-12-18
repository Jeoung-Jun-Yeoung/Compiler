int i = 10;
int j = 1;

int main(){

	while (j) {
		if(i<10)
			i = i + j;
		else if(i>=50)
			i = i * j;
		else
			i = i+10;	
	}
	return 0;
}
