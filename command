build/ARM/gem5.opt configs/example/se.py --cpu-type=arm_detailed -c tests/test-progs/hello/bin/arm/linux/hello --caches --l1d_size=64kB --l1i_size=64kB --l2_size=4MB --sys-clock=2.5GHz
./gem5-mcpat-parser -x template.xml -c config.ini -s stats.txt -o tep.xml
../mcpat/mcpat -infile text.xml > power.txt
fgrep "Runtime Dynamic = " power.txt | sed -n '2p' | sed 's/ W//g' | sed 's/Runtime Dynamic = //g' | sed 's/ //g' > power.txt
