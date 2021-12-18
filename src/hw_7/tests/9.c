struct node {
	char name;
	int value;
	struct node *link; 
};

void node_print(struct node *a) {
    printf("name: %c, value: %d, link: %d\n", a->name, a->value, a->link);
}

int main() {
    struct node n1;
    struct node n2;
    n1.name = 'a';
    n1.value;
    n1.link = &n2;

    n1.link->name = 'b';
    n1.link->value = 24;
    
    node_print(&n1);
    node_print(&n2);

    return 0;
}
