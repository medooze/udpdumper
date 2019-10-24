#ifndef DM_SFU_DUMPER_H
#define DM_SFU_DUMPER_H

#include "UDPDumper.h"

class Dumper :
	public UDPDumper
{
public:
	Dumper() = default;
	~Dumper();
	virtual void WriteUDP(uint64_t currentTimeMillis,uint32_t originIp, short originPort, uint32_t destIp, short destPort,uint8_t* data, uint32_t size) override;
	virtual void Close() override;
};

#endif /* DM_SFU_DUMPER_H */