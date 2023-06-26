#include <iostream>
#include <algorithm>
#include "app.h"
using namespace std;



int main()
{
    BinaryTree<string> family{
        new Node<string> {"me",
            new Node<string>{"mother",
                new Node<string>{"mother's mother"},
                new Node<string>{"mother's father"}
            },
            new Node<string>{"father"}
        }
    };
    for_each(begin(family),end(family),
    [](auto&& n) {
        cout << n.m_value << endl;
    });
    
    return 0;
}