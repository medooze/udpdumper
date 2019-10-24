%module udpdumper
%{
//C++ includes	
#include "Dumper.h"
	
UDPDumper* create()
{
	return new Dumper();
}

%}
//Export to js
%include "UDPDumper.h"

UDPDumper* create();
