#include "UniquePtr.h"
#include "SharedPtr.h"
#include "WeakPtr.h"
#include <iostream>

int main() {
	// Unique Ptr
	std::cout << "Unique Ptr" << std::endl;
	OperateUniquePtr(5); // in the UniquePtr.h file

	// Shared Ptr
	std::cout << "Shared Ptr" << std::endl;
	auto sp = AssignProject(); // in the SharedPtr.h file
	
	// Weak Ptr
	Printer prn;
	int num{};
	std::cin >> num;
	std::shared_ptr<int> p{ new int {num} };
	prn.setValue(p);
	if (*p > 10) {
		p = nullptr;
	}
	prn.Print();

	//solving circular reference with weak ptr
	std::shared_ptr<Train> trn{ new Train{} };
	std::shared_ptr<TrainMaster> trn_mst{ new TrainMaster{} };

	trn->train_master = trn_mst;
	trn_mst->train = trn;
}