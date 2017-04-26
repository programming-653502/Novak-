#include <iostream>
#include <random>

using namespace std;

struct node
{
  int info;
  node* l;
  node* r;
};

void push_single(int a, node **t)
{
  if ((*t) == NULL) 
  {
    (*t) = new node;
    (*t)->info = a;
    (*t)->l = (*t)->r = NULL;
    return;
  }

  else push_single(a, &(*t)->r); 
                
}

void push(int a, node **t)
{
    if ((*t) == NULL)
    {
        (*t) = new node;
        (*t)->info = a;
        (*t)->l=(*t)->r = NULL;
        return;
    }

        if (a > (*t)->info) push(a, &(*t)->r);
        else push(a, &(*t)->l);
}

void print(node *t, int u)
{
    if (t == NULL)
    {
        return;
    }
    else
    {
    print(t->l, ++u);
    for (int i=0; i<u; ++i) cout << "|";
    cout << t->info << endl;
    u--;
    }
    print(t->r, ++u);
}


int main()
{
    node* single_tree = new node;
    single_tree->info = rand() % 100;
    single_tree->l = NULL;
    cout << "SIMPLE TREE" << endl;
    
    int num = rand() % 100; 
    for(int i = 0; i < num - 1; i++)
    {
        push_single(rand() % 100, &single_tree); 
    }

    print(single_tree, 0);
    cout << "SEARCH TREE" << endl;
    node* sort_tree = new node;
    node* temp = single_tree;
    
    for(int i = 0; i < num - 1; i++)
    {
        push(temp->info, &sort_tree); 
        temp = temp->r;
    }
    
    print(sort_tree, 0);
    system("pause");
    return 0;
}

