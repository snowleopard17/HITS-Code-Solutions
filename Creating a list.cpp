#include <bits/stdc++.h>
using namespace std;
#define ld double long
#define INT_MIN -2147483645
#define INT_MAX 2147483645

//cheated from gfg

class List{
  public:
    int a;
    List* next = NULL;
    List* push_back(int num){
      next = new List();
      next->a = num;
      return next; 
    }
    void printList(List* head){
      while(head->next!=NULL){
        cout<< head->a<< ' ';
        head = head-> next;
      }
    cout<< head->a;
    }
    

};



int main()
{
    int x;
    List* head = new List();
    List* n = head;
    while(cin>> x){
      n = n->push_back(x);
    }
    n = head;
    head->printList(head->next);

}