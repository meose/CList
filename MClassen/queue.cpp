#include "stdafx.h"
#include "queue.h"

int list::queue::Push(const int &num) {
	int length = clist::Len();

	if (!clist::Insert(num, length))
		return 0;
	return 1;
}

int list::queue::Pop(void) {
	try{
		if(this->CList != nullptr){
			auto CopyList = this->CList;
			auto ReturnItem = new Pointer;

			ReturnItem = CopyList;
			clist::Delete(0);

			return ReturnItem->item;
		}

		throw "# Traceback (STACK-POP): The list is empty";

	}
	catch (char* exception) {
		std::cout << exception << std::endl;
		return 0;
	}
}