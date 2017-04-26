#include <iostream>
#include <random>

using namespace std;

///имеем структуру
struct node
{
  int info;
  node* l;
  node* r;
};

///функция для добавления элемента в невырожденное дерево

void push_single(int a, node **t)
{
  if ((*t) == NULL)  // если узел - нулевой указатель, то создадим его.
  {
    (*t) = new node;
    (*t)->info = a;
    (*t)->l = (*t)->r = NULL;
    return;
  }

  else push_single(a, &(*t)->r); // иначе будем рекурсивно делать функцию пока не
                          // найдется пустой элемент для добавления узла.
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
    //инициализируем первый узел
    single_tree->info = rand() % 100;
    single_tree->l = NULL;
    cout << "SIMPLE TREE" << endl;
    int num = rand() % 100; // генерируем количество узлов
    for(int i = 0; i < num - 1; i++)
    {
        push_single(rand() % 100, &single_tree); //генерируем рандомные зачения и просто вставляем в конец вырожденного дерева.
    }

    print(single_tree, 0);
    cout << "SEARCH TREE" << endl;
    node* sort_tree = new node;
    node* temp = single_tree;
    for(int i = 0; i < num - 1; i++)
    {
        push(temp->info, &sort_tree); //генерируем рандомные зачения и просто вставляем в конец вырожденного дерева.
        temp = temp->r;
    }
    print(sort_tree, 0);
    return 0;
}
