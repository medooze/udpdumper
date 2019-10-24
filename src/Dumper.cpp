#include <iostream>
#include "Dumper.h"

Dumper::~Dumper()
{
	std::cout << "Dumper::~Dumper()()\n";
}

    
void Dumper::WriteUDP(uint64_t currentTimeMillis,uint32_t originIp, short originPort, uint32_t destIp, short destPort,uint8_t* data, uint32_t size)
{
	std::cout << "Dumper::WriteUDP()" << currentTimeMillis << " size " << size <<"\n";
}

void Dumper::Close()
{
	std::cout << "Dumper::Close()\n";
}
