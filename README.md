# snow-crash - A 42 school project

## Setting up the project

To set-up the project we need to download the Snow-crash ISO from the intra project page.  
Once done we create a new VM with at least 2048 RAM and 1 Cores.  
Then we go to the Settings and under `Network` we change `Attached to:` **Host-only Adapter**.  
Once that is done we can boot the VM.  

## Methodology

When we first begin a level we'll first look into who we are
>whoami

>id

Where we are
>pwd

>ls -l

What we have access to

>find / -user \<us\> 2>/dev/null

>find / -name "*\<us\>" 2>/dev/null

>sudo -l

What the goal has access to

>find / -user \<target\> 2>/dev/null

>find / -name "*\<target\>" 2>/dev/null
