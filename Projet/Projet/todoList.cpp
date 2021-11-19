#include "todoList.h"

TodoList::TodoList()
{

}

Todo TodoList::getTodo(int id)
{
	return todoList.at(id);
}

void TodoList::add(Todo _todo)
{
	todoList.push_back(_todo);
}

