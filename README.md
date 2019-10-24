# udpdumper
Example of custom udpdumper for `Transport.dump()`

## Setup

```
npm install --save https://github.com/medooze/udpdumper.git
```

## Usage

```
const UDPDumper = require("udpdumper");

//Create dumper
const dumper = UDPDumper.create();

//Set it on transport
transport.dump(dumper);
```

