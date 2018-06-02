#include "stdafx.h"
#include "NamedPipe.h"
#include <Windows.h>

NamedPipe::NamedPipe(const char *name)
{
	::strncpy_s(pipeName, name, MAX_PATH);
	pipeIsOpen = false;
	hpipe = NULL;
}

bool NamedPipe::Open()
{
	if (pipeIsOpen)
		return true;
	hpipe = ::CreateFileA(pipeName, GENERIC_WRITE | GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, 0, NULL);
	if (pipeIsOpen = (hpipe != NULL))
	{
		::COMMTIMEOUTS	to = { 10, 100, 10, 100 };
		::SetCommTimeouts(hpipe, &to);
	}
	return pipeIsOpen;
}

bool NamedPipe::IsOpen()
{
	return pipeIsOpen;
}

void NamedPipe::Close()
{
	if (pipeIsOpen)
	{
		::CloseHandle(hpipe);
	}
	pipeIsOpen = false;
	hpipe = NULL;
}

void NamedPipe::Flush()
{
	if (pipeIsOpen)
	{
		::FlushFileBuffers(hpipe);
	}
}

unsigned NamedPipe::Write(const char*data, unsigned length)
{
	if (!pipeIsOpen)
		return 0;
	DWORD	bytesWritten = 0, total = 0;
	do
	{
		if (!::WriteFile(hpipe, data + total, length - total, &bytesWritten, NULL))
			return total;
		total += bytesWritten;
	} while (total < length);
	return total;
}

unsigned NamedPipe::ReadImmediate(char *buffer, unsigned maxLen)
{
	if (!pipeIsOpen)
		return 0;
	DWORD d = 0;
	::ReadFile(hpipe, buffer, maxLen, &d, NULL);
	return d;
}

NamedPipe::~NamedPipe()
{
	Close();
}
