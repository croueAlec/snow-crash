# Download file to have root permissions on local machine
`scp -P 4242 level01@192.168.56.102:level02.pcap .`

# Use Wireshark to analyse TCP flux to find passwd end check ascii to see that . = delete
`ft_wandr...NDRel.L0L` -> `ft_waNDReL0L`

# Switch user and get the flag
```bash
su flag02
getflag
```
