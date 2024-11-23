# Level02

Download the file.pcap on your local machine.
>`scp -P 4242 level02@<VM address>:level02.pcap .`

Use Wireshark to analyse TCP flux to find the password.
>`Password: ft_wandr...NDRel.L0L`

The `.` are representation of non printable data, change the data representation from ASCII to C Arrays to get there real value.
The `.` are actually `DEL` chars, so for every dot we need to remove the char which precedes it.
 end check ascii to see that . = delete
>`ft_wandr...NDRel.L0L` -> `ft_waNDReL0L`

Switch user and get the flag.
>`su flag02`

>`getflag`
