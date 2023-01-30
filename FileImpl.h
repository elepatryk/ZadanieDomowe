#include <vector>
#include <string> //std::string errors

enum myException { IOException, FileException};

class File
{
public:

	File() {}
	//virtual ~File() = 0 {};
	virtual ~File() = 0;
	virtual void read(std::vector<int>& data, unsigned long length) = 0;
	virtual void write(std::vector<int>& data) = 0;
	
	//_______________________________________________________
	virtual unsigned long sizeOf(std::vector<int>& data) = 0;
	virtual void close(std::vector<int>& data) = 0;
	virtual void setFilePointer(std::vector<int>& data, unsigned long filePointer) = 0;


};


class FileImpl : public File
{
private:
	std::vector<int> data_;

public:
	FileImpl(const std::string& path) :File() {}
	~FileImpl();

	void read(std::vector<int>& data, unsigned long length) override;
	void write(std::vector<int>& data) override;
	
	//_______________________________________________________
	unsigned long sizeOf(std::vector<int>& data) override;
	void close(std::vector<int>& data) override;
	void setFilePointer(std::vector<int>& data, unsigned long filePointer) override;
};

