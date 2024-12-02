# Level02

Download the file.pcap on your local machine.
>`scp -P 4242 level02@<VM address>:level02.pcap .`

Using Wireshark to analyze the *pcap* file we can do `Analyze > Follow > TCP Stream`.
>`Password: ft_wandr...NDRel.L0L`

The `.` are representation of non printable data, change the data representation from ASCII to Hex Dump to get their real value.
The `.` are actually `DEL` chars, so for every dot we need to remove the char which precedes it.
>`ft_wandr...NDRel.L0L` -> `ft_waNDReL0L`

Switch user and get the flag.
>`su flag02`

>`getflag`
