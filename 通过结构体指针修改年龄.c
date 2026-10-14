#include<stdio.h>
struct Student {
    char name[20];
    int age;
    float score;
};
void set_age(struct Student *s, int age){
    s->age=age;
}
int main(){
    struct Student s = {"Tom", 18, 90.5f};
    set_age(&s, 20);
    printf("%d\n",s.age);
    return 0;
}