#pragma once
#include <vector>

#include "todo.h"

class TodoList
{
private:
	std::vector<Todo> todoList;

public:
	TodoList();

	void add(Todo _todo = Todo());
	Todo getTodo(int id);

};