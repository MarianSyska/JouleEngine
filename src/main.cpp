#include <iostream>
#include "jeAABB.h"
using namespace std;

int main() {

    jeAABB *aabb1 = new jeAABB({2.0f,1.0f},
                               {0.5f, 0.5f});

    jeAABB *aabb2 = new jeAABB({2.0f, 1.0f},
                               {0.5f, 0.5f});

    std::cout << aabb1->isTouching(*aabb2) << std::endl;

    std::cout << aabb1->getString() << aabb2->getString();
}

