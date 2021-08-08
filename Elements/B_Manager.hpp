// struct B_NODE
// {
//     Button btn;
//     B_NODE *next = NULL;
// };
// #include "Buttons.hpp"

// class B_NODE
// {
// public:
//     Button btn;
//     B_NODE *next = nullptr;
// };

// class LinkedList
// {
// private:
//     B_NODE *head;
//     int length;

// public:
//     LinkedList()
//     {
//         head = nullptr;
//         length = 0;
//     }
//     LinkedList &push(B_NODE *t)
//     {
//         if (head)
//         {
//             t->next = head;
//             head = t;
//         }
//         else
//         {
//             head = t;
//         }
//         length++;
//         return *this;
//     }
//     int len()
//     {
//         return length;
//     }
// };

// static LinkedList buttons;
