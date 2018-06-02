#pragma once

class NamedPipe
{
private:
	HANDLE hpipe;
	bool pipeIsOpen;
	char pipeName[MAX_PATH];

public:
	NamedPipe(const char *name);
	~NamedPipe();

	bool Open();
	bool IsOpen();
	void Close();
	unsigned Write(const char*data, unsigned length);
	unsigned ReadImmediate(char *buffer, unsigned maxLen);
	void Flush();
};
