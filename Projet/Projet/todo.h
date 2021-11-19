#pragma once
#include <string>

#include "date.h"
#include "category.h"

class Todo
{
private:
	std::string title, descripton;
	Date dueDate;
	int priority;
	Category category;
	bool status;

public:
	Todo(std::string _title = "", Date _dueDate = Date(), std::string _description = "", int _priority = 0, Category _category = Category::None, bool _status = false);

	std::string getTitle();
	Date getDueDate();
	std::string getDescription();
	int getPriority();
	Category getCategory();
	bool getStatus();

	void setTitle(std::string _title = "");
	void setDueDate(Date _dueDate = Date());
	void setDescription(std::string _description = "");
	void setPriority(int _priority = 0);
	void setCategory(Category _category = Category::None);
	void setStatus(bool _status = false);
};