# Level00

We'll locate flag00's files that we are permitted to access.
>`find / -user flag00 2>/dev/null`

Let's cat one of the files and decode the rot11 cypher to get the password.
>`cat /usr/sbin/john`

>`cdiiddwpgswtgt` -> `https://www.dcode.fr/rot-cipher` -> `nottoohardhere`

Switch user and get the flag.
>`su flag00`

>`getflag`
