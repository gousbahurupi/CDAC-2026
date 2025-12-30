

// Online C++ compiler to run C++ program online
#include <stdio.h>
struct emp{
    int ei;
    float sal;
    char nm[100];
};
void accept(struct emp *e){
    printf("Entar empid: ");
    scanf("%d",&(*e).ei);
    printf("Entar emp name: ");
    scanf("%s",&(*e).nm);
    printf("Entar empsal: ");
    scanf("%f",&(*e).sal);
}

void display(const struct emp e){
    printf("\nempid: %d",e.ei);
    printf("\nemp name: %s",e.nm);
    printf("\nemp sal: %f",e.sal);
}

int main() {
    // Write C++ code here
    struct emp e;
    accept(&e);
    display(e);
    
}