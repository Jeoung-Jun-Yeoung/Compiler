struct person
{
	int age;
};

int main(){
	struct person p1;
	struct person p2;
	struct person p3;

	p1.age = 10;
	p2.age = 20;
	p3.age = p1.age + p2.age;

}


