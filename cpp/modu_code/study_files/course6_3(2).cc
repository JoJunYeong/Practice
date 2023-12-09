/*

기반클래스의 래퍼런스여도 문제없이 작동한다.

*/

#include <iostream>

class A {
    public:
        virtual void show() { std::cout << "Parent!" << std::endl; }
};
class B : public A{
    public:
        void show() override { std::cout << "Child!" << std::endl; }
};

void test(A& a) { a.show(); }

int main() {
    A a;
    B b;
    test(a);
    test(b);

    return 0;
}

