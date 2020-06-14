# Prerequisites  

Run `make` to compile, you should now have : dtobx, fnlip, ipv4tob and nmfinder.  


## DTOBX  

A simply program that convert decimal to his binary and hexadecimal equivalent.  

### Exemple  

Run `./dtobx 9000`  


## FNLIP  

A simply program that calculate hostIP(V4) range in a network, by giving the address and the netmask.  

### Exemple  

Run `./fnlip 192.168.0.1/28`  
Or  
Run `./fnlip 192.168.0.1 255.255.255.240`  


## IPV4TOB  

A simply program that convert an IP(V4) to his binary and hexadecimal equivalent.  

### Exemple  

Run `./ipv4tobx 192.168.0.1`  


## NMFINDER  

A simply program that calculate a netmask, by giving the number of people that will be on a network (rounded up to the highest). And shows it in binary to see what bits are free and those who aren't.  

### Exemple  

Run `./nmfinder 9000`  