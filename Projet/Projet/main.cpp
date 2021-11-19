#include "todoList.h"

#include <iostream>

int main()
{
	TodoList t;
	t.add();

	t.getTodo(0).setTitle("Manger");
	t.getTodo(0).setDueDate(Date(19, 11));

	std::cout << t.getTodo(0).getTitle() << " " << toString(t.getTodo(0).getDueDate());

	return 0;
}