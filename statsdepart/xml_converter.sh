#!/bin/bash

i=1
for i in {1..173}
do
    python GEM5ToMcPAT.py /root/Desktop/powertrace/depart$i.txt /root/Desktop/gem5_1/newhello2/config.json Z.xml
    mv mcpat-out.xml /root/Desktop/powertrace/mcpat_input/test_results/applu_$i.xml
    let i=i+1
done

