#pragma once
#include <iostream>
#include <memory>

class Printer
{
public:
	void setValue(std::weak_ptr<int> p) {
		m_pInt = p;
	}

	void Print() {
		if (m_pInt.expired())
		{
			std::cout << "Resource no longer available" << std::endl;
			return;
		}
		auto sp = m_pInt.lock();
		std::cout << "Value is: " << *sp << std::endl;
		std::cout << "Ref count: " << sp.use_count() << std::endl;
	}
private:
	std::weak_ptr<int> m_pInt{};
};

class TrainMaster;
class Train {
public:
	std::shared_ptr<TrainMaster> train_master;
	Train() {
		std::cout << "Train()" << std::endl;
	}
	~Train() {
		std::cout << "~Train()" << std::endl;
	}
};

class TrainMaster {
public:
	std::weak_ptr<Train> train;
	TrainMaster() {
		std::cout << "TrainMaster()" << std::endl;
	}
	~TrainMaster() {
		std::cout << "~TrainMaster()" << std::endl;
	}
};