#pragma once
#include "Integer.h"
#include <iostream>

class Project
{
public:
	~Project() {
		std::cout << "~Project()" << std::endl;
	}
};

class Employee
{
public:
	~Employee() {
		std::cout << "~Employee()" << std::endl;
	}
	void SetProject(std::shared_ptr<Project> p) {
		m_pProject = p;
	}
	std::shared_ptr<Project> GetProject() const {
		return m_pProject;
	}
private:
	std::shared_ptr<Project> m_pProject;
};

std::shared_ptr<Employee> AssignProject() {
	std::shared_ptr<Project> p{ new Project{} };
	Employee* e1 = new Employee{};
	e1->SetProject(p);
	return std::shared_ptr<Employee>{ e1 };
}