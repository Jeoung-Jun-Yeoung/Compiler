typedef struct node {
    char *name;
} temp_node;

void* function(temp_node *n, char *name) {
    n->name = name;
    return n;
}

int main() {
    temp_node a;
    temp_node *ptr = function(&a, "name");
    printf("%s\n", ptr->name);
    n.name = "name_temp";
    printf("%s\n", ptr->name);

    return 0;
}
