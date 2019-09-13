# gem5-mcpat-parser
A parser to convert the simulation data output of gem5 into an XML file format for McPAT 1.3 2015 (should work for older versions too) for gem5 2.0.

This parser is based on a modified version of the 2015 version which can be found at this repository https://github.com/markoshorro/gem5McPATparse.

The parser's parsing is broken as some arguments will be assigned negative values. I have added a script called "parsefix" to fix this where it greps the required value and uses xmlstarlet to write the
correct value back to the configured XML file. You can add your own lines to the script if needed (just replicate the lines and add if-checks if necessary)

This parser does not support

	1) Checkpointing
	2) Fast-forwarding
	3) Multi-core simulations (--num-cpus > 1)
	4) Full-system call emulation

It works best with the DerivO3CPU however the AtomicSimpleCPU will still work but there might be some negative values associated with the McPAT arguments.

	Warning: stat system.core0.dtlb 'total_accesses' has a value of 0!
	Warning: stat system.core0.dtlb 'total_misses' has a value of 0!
	Warning: stat system.core0.dcache 'write_accesses' has a negative value!
	Warning: stat system.core0.dcache 'write_misses' has a value of 0!
	Warning: stat system.core0.BTB 'write_accesses' has a value of 0!
	Warning: stat system.L20 'read_accesses' has a value of 0!

Examples of warnings generated from the parser.

You can run the compute script which will 

	1) Run gem5-mcpat-parser first to parse the stats.txt and create a configured (but broken) XML file.
	2) Run parsefix to apply the correct values to the XML file.
	3) Run McPAT on the final file which will write the contents to a file on your choice

by doing 
	
	./compute stats.txt config.ini template.xml configuration.xml gem5-mcpat-parser/gem5-mcpat-parser mcpat/mcpat 5 > results.txt

Where 
	stats.txt, config.ini are the gem5 simulation data files.
	template.xml is a template you must provide 
	configuration.xml is just a name of the configuration file the script will create
	gem5-mcpat-parser/gem5-mcpat-parser is the path to the parser (including the binary itself along the path)
	mcpat/mcpat is the path to the McPAT binary (including the binary itself along the path)

Use the -h option for more information.

To my understanding, the original creator of the parser made it such that this parser only works for single core simulations. If you try to use this parser with more than 1 CPU (--num-cpus=2 etc) then it will generate a lot more warnings.

Feel free to drop a comment/issue if you think some values are not correct i.e the parser calculates it wrongly or something else is missing etc. Everyone is welcome to modify or improve the parser. 
I would love to get it working for fast-forwarding, checkpointing and everything else.

#Note:

The following modifications were made to this parser:

1) Removal of L3 cache from the template.xml file provided and removal of parsing of L3 cache information from the parser itself. Since gem5 no longer includes an L3 cache in the standard se.py (System call emulation configuration script) 

2) Renaming from gem5McPATparse to gem5-mcpat-parser.

3) Re-organised the file structuring and makefile 


Related problems

Currently the script has no way of knowing which memory model gem5 uses (Classic vs Ruby) and McPAT seems only to support directory based cache coherence protocols.
The script is missing some components of McPAT such as PCIE and NoC etc.


