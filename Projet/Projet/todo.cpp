#include "todo.h"

/*
	Constructor
*/

Todo::Todo(std::string _title, Date _dueDate, std::string _description, int _priority, Category _category, bool _status)
	:	title(_title), dueDate(_dueDate), descripton(_description), priority(_priority), category(_category), status(_status)
{

}

/*
	Getter
*/

std::string Todo::getTitle()
{
	return title;
}

Date Todo::getDueDate()
{
	return dueDate;
}

std::string Todo::getDescription()
{
	return descripton;
}

int Todo::getPriority()
{
	return priority;
}

Category Todo::getCategory()
{
	return category;
}

bool Todo::getStatus()
{
	return status;
}

/*
	Setter
*/

void Todo::setTitle(std::string _title)
{
	title = _title;
}

void Todo::setDueDate(Date _dueDate)
{
	dueDate = _dueDate;
}

void Todo::setDescription(std::string _description)
{
	descripton = _description;
}

void Todo::setPriority(int _priority)
{
	priority = _priority;
}

void Todo::setCategory(Category _category)
{
	category = _category;
}

void Todo::setStatus(bool _status)
{
	status = _status;
}