{
	"targets": 
	[
		{
			"target_name": "udpdumper",
			"cflags": 
			[
				"-fexceptions",
				"-std=c++14",
				"-O3",
				"-g",
				"-Wno-unused-function",
				"-Wno-unused-result",
				#"-faligned-new",
				#"-O0",
				#"-fsanitize=address"
			],
			"include_dirs" : 
			[
				'/usr/include/nodejs/',
				"<!(node -e \"require('nan')\")"
			],
			"sources": 
			[ 
				"src/Dumper.cpp",
				"src/udpdumper_wrap.cxx",
			],
		}
	]
}

