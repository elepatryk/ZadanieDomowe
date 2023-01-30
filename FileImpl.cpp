#include "FileImpl.h"

void FileImpl::read(std::vector<int>& data, unsigned long length)
{

	// if length <= 0 throw exception
	if (length <= 0) {
		throw IOException;
	}

	for (int i = 0; i < length; i++) {
		data[i] = this->data_[i];
	}

}

void FileImpl::write(std::vector<int>& data)
{
	if (data.size() == 0) { // if data empty throw exception
		throw IOException;
	}

	data_ = data;
}

unsigned long FileImpl::sizeOf(std::vector<int>& data) //length?
{
	//
	return 0;
}
void FileImpl::close(std::vector<int>& data)
{
	//
}
void FileImpl::setFilePointer(std::vector<int>& data, unsigned long filePointer)
{
	//
}

int main ()
{
	//
}

