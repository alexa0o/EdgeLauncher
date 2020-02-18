## EdgeLauncher
I have decided to use WSL and Microsoft Edge on my laptop. I wanted the window of browser could open after
calling the `jupyter notebook`.  
As we know, we can run `.exe`. files under WSL. I have tried to set environment variable BROWSER to the path
to the `MicrosoftEdge.exe` such as `/mnt/c/Windows/...`, but after that I have tried to call `jupyter notebook` and saw nothing.  
I have found some information in the internet knowing that we can't run Microsoft Edge from `.exe` file. Therefore
I've decided to write this program.  
If we want to run this browser in `cmd.exe` we have to write `start microsoft-edge:` (or `start microsoft-edge:site_address`).
The program takes one command line argument and does `start microsoft-edge:argument`.

So, now we can set `BROWSER` in our `.bashrc` file to the path to compiled program and run the browser from WSL.

## P.S.
Now I've found  analogical solution from Microsoft (https://github.com/MicrosoftEdge/edge-launcher). But I hope that some
 of my readers can find this simple solution interesting. 

