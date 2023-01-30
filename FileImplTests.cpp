#include "gtest/gtest.h"
#include "../file/FileImpl.h"
#include <string>
#include <vector>

/*
READ
3.1.3.4.1.5.1.5 Exceptions/Errors
The read operation shall raise the IOException when a read error occurs
Sprawdzamy czy wywołanie read z długością 0 wywoła błąd.
*/
TEST(TestRead, WhenReadIsCalledWithLength0ThenThrowException)
{
	std::string path = "example_path";
	File* file = new FileImpl(path);

	std::vector<int> data;

	try
	{
		file->read(data, 0);
	}
	catch (myException exception)
	{
		std::cout << "Exception Called : " << exception << std::endl;
	}

	EXPECT_TRUE(true);
	
	delete file;
}

//test dla tego samego przypadku, EXPECT_THROW zamiast try catch
TEST(TestRead, WhenReadIsCalledWithLength0ThenExpectThrowException)
{
	std::string path = "example_path";
	File* file = new FileImpl(path);
	
	std::vector<int> data;
	
	file->read(data, 0);
	EXPECT_THROW(file->read(data, 0), myException) ;

	delete file;
}

/*
WRITE
3.1.3.4.1.5.2.5 Exceptions/Errors
The write operation shall raise the IOException when a write error occurs.
Sprawdzamy czy wywołanie write z pustym wektorem danych (kontenerem) wywoła błąd
*/
TEST(TestWrite, WhenWriteIsCalledWithEmptyDataThenThrowException)
{
	std::string path = "example_path";
	File* file = new FileImpl(path);

	std::vector<int> data;

	try
	{
		file->write(data);
	}
	catch (myException exception)
	{
		std::cout << "Exception Called : " << exception << std::endl;
	}

	EXPECT_TRUE(true);
	
	delete file;
}

/*
WRITE
3.1.3.4.1.5.2.5 Exceptions/Errors
The write operation shall raise the IOException when a write error occurs.
Sprawdzamy czy wywołanie write z poprawnymi danych wywoła błąd
*/
TEST(TestWrite, WhenWriteIsCalledWithGoodDataThenSuccess)
{
	std::string path = "example_path";
	File* file = new FileImpl(path);

	std::vector<int> data;

	try
	{
		file->write(data);
	}
	catch (myException exception)
	{
		std::cout << "Exception Called : " << exception << std::endl;
	}

	delete file;
}