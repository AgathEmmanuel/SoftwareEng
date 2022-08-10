# ComputerNetworking-notes


## Fundamentals  

Building load balancer from scratch  
system calls  
network blocking  
interrupts  


[https://medium.com/@openmohan/dns-basics-and-building-simple-dns-server-in-go-6cb8e1cfe461](https://medium.com/@openmohan/dns-basics-and-building-simple-dns-server-in-go-6cb8e1cfe461)  
[https://datatracker.ietf.org/doc/html/rfc1035](https://datatracker.ietf.org/doc/html/rfc1035)  
[https://github.com/miekg/dns](https://github.com/miekg/dns)  
[https://github.com/openmohan/lightdns](https://github.com/openmohan/lightdns)  


[https://www.geeksforgeeks.org/interrupts/](https://www.geeksforgeeks.org/interrupts/)  
[https://binaryterms.com/interrupts-in-computer-architecture.html](https://binaryterms.com/interrupts-in-computer-architecture.html)  
 


What is a proxy server?

    A proxy server, sometimes referred to as a forward proxy, is a server that routes traffic between client(s) and another system, usually external to the network. By doing so, it can regulate traffic according to preset policies, convert and mask client IP addresses, enforce security protocols, and block unknown traffic.




What is a reverse proxy?

    A reverse proxy is a type of proxy server.  Unlike a traditional proxy server, which is used to protect clients, a reverse proxy is used to protect servers. A reverse proxy is a server that accepts a request from a client, forwards the request to another one of many other servers, and returns the results from the server that actually processed the request to the client as if the proxy server had processed the request itself. The client only communicates directly with the reverse proxy server and it does not know that some other server actually processed its request. 




## Computer communication  

Introduction to computer communication:   

Transmission modes -  
serial and parallel transmission, asynchronous, synchronous,  
simplex, half duplex, full duplex communication.  
Switching: circuit switching and packet switching  


Networks: Network criteria, physical structures, network models,  
categories of networks, Interconnection of Networks: Internetwork  
Network models: Layered tasks, OSI model, Layers in OSI model,  
TCP/IP protocol suite.  


Physical Layer: Guided and unguided transmission media  
(Co-axial cable, UTP,STP, Fiber optic cable)  
Data Link Layer: Framing, Flow control (stop and wait , sliding  
window flow control)  
Error control, Error detection( check sum, CRC), Bit stuffing,  
HDLC  
Media access control: Ethernet (802.3), CSMA/CD, Logical link  
control, Wireless LAN (802.11), CSMA/CA  
  
  
Network Layer Logical addressing : IPv4 & IPV6   
Address Resolution protocols (ARP, RARP)   
Subnetting, Classless Routing(CIDR), ICMP, IGMP, DHCP   
Virtual LAN, Networking devices ( Hubs, Bridges & Switches)   
  
  
Routing: Routing and Forwarding, Static routing and Dynamic  
routing  
Routing Algorithms: Distance vector routing algorithm, Link state  
routing (Dijkstra’s algorithm)  
  
  
Routing Protocols: Routing Information protocol (RIP), Open  
Shortest Path First (OSPF), Border Gateway Protocol (BGP),  
MPLS  
  
  
Transport Layer –UDP, TCP   
Congestion Control & Quality of Service – Data traffic,  
Congestion, Congestion Control, QoS and Flow Characteristics  
Application Layer – DNS, Remote Logging (Telnet), SMTP, FTP,  
WWW, HTTP, POP3, MIME, SNMP  
  
Introduction to information system security, common attacks   
  
  
Security at Application Layer (E-MAIL, PGP and S/MIME).  
Security at Transport Layer (SSL and TLS).  
Security at Network Layer (IPSec).  
  
  
Defence and counter measures: Firewalls and their types. DMZ,  
Limitations of firewalls, Intrusion Detection Systems -Host based,  
Network based, and Hybrid IDSs  


## DNS  

http://host.domain.domain/  


man dig  
dig google.com  
dig -x 12.21.33.14		# -x specifies to do a reverse lookup  
nslookup  

DNS query  
Forwarded actions  
- search from root  
- follow referrals  
- find and then return answers  
Recursion  
- take responsibility to find  
- follow referrals recusively and get answer  
Caching  


DNS components  
- DNS servers  
- Name servers( recursive,nonrecursive,forwarder,caching server)  
- Root  
- TLD (Top Level Domain)  
- dmains  
- sub  
- DNS Zones  
- forward zones and reverse zones  
- primary zones and secondary zones  
- DNS resource records  
- DNS zone file  
- DNS record types (NS,SOA,A,AAAA,CNAME,PTR and MX,TXT,SRV,SPF)  
- DNS clients  (any device with a resolvers built into OS)  
- Resolvers (submit queries and receive responses)  
- root/topLevelDomain/Domain/Subdomain  


SOA: Start of Authority  
NS: Name servers  


Zone file:  
  TTL  
  SOA  
  Serial Number  
  Zone Resource Records  



pfSence Router in the BIND installation  

A records  
AAAA records  
CNAME records  
MX records  
TXT records  
SRV records  
PTR records  


DNS Best Practices:  

Have at least Two Internal DNS servers  
Use Active Directory Integrated Zones  
Best DNS Order on Domain Controllers  
Domain-joined Computers Should Only Use Internal DNS Servers  
Point Clients to The Closest DNS Server  
Configure Aging and Scavenging of DNS records  
Setup PTR Records  
Root Hints vs Forwarding (Which one is the best)  
Enable Debug Logging  
Use CNAME Records for Alias (Instead of A Record)  
DNS Best Practice Analyzer  

Major topics:  

internet-based DNS provider  
DNS zone setup  
Adding A,MX,CNAME,SRV,SPF,Reverse records  
Testing configs using nslookup  
windows dns auto PTR creation  
windows dns dynamic updates  
OS X server AAAA record conundrum  
mDNSResponder logging levels in OSX  
Mac hosts file and resol.conf  
mDNSResponder logging levels in Mac OSX  
Reseting caches in linux,windows,Mac dns  
mDNS and service discovery  
mDNS responders  

Major links:  
https://www.redhat.com/sysadmin/dns-configuration-introduction  
https://tldp.org/LDP/lame/LAME/linux-admin-made-easy/domain-name-server.html  
https://multicastdns.org  
https://dns-sd.org  
https://developer.apple.com/bonjour  
https://developer.apple.com/darwin/projects/bonjour  
https://opensource.com/article/17/4/build-your-own-name-server  
https://www.isc.org/bind/  
https://www.oreilly.com/library/view/dns-and-bind/0596100574/  




## Linux Bind and DNS  

a domain name with full administrative access  
install bind as root or sudo  


yum install bind bind-utils  
apt-get install bind9 bind9utils bind9-doc  


Caching name server  
- look things up  
- remembers those and aswers to quries without looking again  
- caches the outputs of DNS queries  
- does recursive queries  
- multiple queries are send and multiple replies received  
cons:
- may return not uptodate results based on TTL (time to live)  
- infos like ip address may have changed on authorive name server  
- caching is temporary,when reloaded or rebooted entire cache is cleared and new one begins  

/etc/named.conf  

acl: access control list  


DHCP clients  

/etc/resolv.conf 


Forwarding name server  
- also called a proxy server  
- also caches outputs of DNS queries  
- does nonrecursive queries  
- single query is send and sing reply received  
cons:  
- may return not uptodate results based on TTL (time to live)  
pros:  
- external network traffic is reduced  
- a layer of abstraction is added  
- load on names server is decreased  
steps:
/etc/named.conf  
change recursion yes;  to  no;  
add    forward only;  
add    forwarders { DNS servers we need to forward to }  


Authoritative only names server  
- only job is to provide official answer to a DNS query for a domain  
- do not cache  
- will be either a zone master or slave  
- no resources taken away by other tasks giving performant outputs  
steps:
/etc/named.conf  
change recursion yes;  to  no;  
add in view "external" the zone files  
zone "new.external.zone" {  
         type master;  
         file "new.exernal.zone.db"  
};  


Mixed-configuration name servers  
- shared server  
- split server  
- single server  
- stealth server  
- DMZ servers  
- separate servers  

Single server:  
- here we expose everything to outside world  
- everyone in public internet get access to this nameserver by port-forwarding port 53  

split server:
- here we have 2 servers, 1 inside firewall and 1 outside firewall  
- people in public internete will only interact with server outside firewall  
pros:
- even if ouside server hacked no issues with server inside firewall  
cons:
- some duplication of records that is records need to updated for both public & private dns  


Shared server:  
- multihomed or networks with more than 2  
- a single server(bastion host) with single purpose that sits on both internal and external networks  
- both internal and external networks are treated the same manner  
- this is common when you are hosting externally(vendors), and we use CNAMEs to point to them   

multiviewed server:  
- multihomed or networks with more than 2  
- a single server(bastion host) with single purpose that sits on both internal and external networks - here in we use views (available in bind 9+) enabling separate zone file to answer external and internal queries resulting in minimized hardware cost  


Zone files:
- contains info on DNS zone  
- maps domain name to ip addresses  
- RFC 1034, 1035  specifies internet standard for zone files  
configurations:  
- TTL  





## Networking  



routers  
switches  


Overview of internetworking  
Ethernet  
The TCP/IP networking model  
subnetting  
VLSM  
IP routing  
Layer 2 switching  
VLANs and InterVLAN routing  
Security  
Network address translation  
IPv6  



  
setup a host with TCP/IP either statically or with DHCP  

Interconnecting Network Devices  

Packet tracer can be used for simulating the physical networking hardware  


internetwork :  its created when 2 or more devices are connected via a router with a logical network addressing scheme or IPv6  

LAN  

Hub- mult port repeater  

repeater- receives signal, aplifies sigal, broadcasts signal out to other ports  

broadcast domains: 1
collision domains: 1

Swith- can be used to segment a network
       each network segment that connects to the switch becomes its own collision domain, but it will still be having  
       only a single broadcast domain  

once the network is segmented  

```
     Hub--------Switch  
     | |          |
user1  user2     user3 


broadcast domains: 1
collision domains: 2

if user2 sents a message to user1, then user3 will not receive it 
if user2 sents a broadcast , then everyone will  receive it this causes unnessasary conjestion


```


network segmentation : breaking a large network into smaller broadcast domains  


```
internetwork  

       Switch1--------------RouterA-------------Switch2
       |    |                                   |    |
   user1    user2                            user3   user4

here we place a router between this 2 LANs
creating 2 different subnets

if user1 sents a broadcast then it reaches till routerA and its then discarded
routers do not forward request by default 

so user3 will receive data from user1 only when user1 specifically sends data to user3's ip address 


```


Network devices  

Access Point  
Switch  
WLAN Controller  
Internet  
Firewall  
Router  


A large Switched network can be called as an Internetwork  


layer2 switching  

hosts (user devices)  
access layer  
distribution layer  
layer3 switch (to provide IVR Iner VLAN Routing )  

VLAN  (Virutal LANs)  
Breaks up broadcast domains on a layer2 network  

```

            switch1           [layer3 switch] [for IVR]
               |
            switch2           [distribution layer]
         |     |     |  
    switch3  switch4  switch5   [access layer] [layer2 switch]
   |     |   |    |     |     |
user1 user2 user3 user4 user5 user6  [host layer]   
VLAN3 VLAN4 VLAN1 VLAN3 VLAN3 VLAN1  [they are in different subnets, that is different broadcast domains, like different Virtual LANs ]

For a host to talk from one VLAN to another they need to go through some layer3 device like a router or layer3 switch

```


OSI Model  

Application    HTTP,FTP                   provides a user interface   
Presentation   Telnet,Dns                 presents the data and handles processes like encryption  
Session        SNMP,POP                   separate data between different applications  
Transport      TCP,UDP                    reliable or unreliable delivery of data, and performs error correction before retransmit  
Network        ARP,IP,ICP                 does logical addressing which routers user for path determination  
Data link      Ethernet                   combines packets into bytes and bytes into frames, provides access to media using MAC address and performs error detection without focusing on error correction  
Physical       Cables,Optical fibres      data bit transmission between devices, cables with different speeds, voltage and configurations  


Ethernet  

its a LAN technology or protocol used to connect devices on a network to form a LAN  

collision domain:  network segment in which one system can broadcast to all other connected systems on the segment  
  one device sents a frame out on a physical device and forces every other device on the same segment to pay attention to it  
  this can cause lot of traffic slowing down every systems connection in the domain.  
we can break up collision domains with a switch, each port on a switch is a unique collision domain, which decreases traffic,
freeing up bandwidth for users, switches dont breakup broadcast domains by default an entire switch is one broadcast domain.
Routers offer the benefit of segmenting broadcast domains, on router each port is its own broadcast domain.

Each switch port is capable running in full duplex mode ( transmit and receive transmit traffic simultaneousl )
Half duplex mode ( port either transmits or receives at any given time and also uses CSMA/CD Carrier Sense Multiple Access with Collision Detection )
Mixed Duplex mode  

```
 router interfaces ===
 >  S1R1
 >  S2R1
 total switch segments: 10


           Switch1   ========= Router1 =========  Swich2           

        |  |   |   |                         |   |   |   |
        h1 h2 h3   h4                        h5  h6 h7   h8

broadcast domains: 2
collision domains: 10

```

@Switch0001$ sh int S1R1


MAC address 

media access control  
Hexidecimal ID number burned into ROM on network inerface card (NIC)  


Ethernet stations pass data frames between each other using a MAC frame format, provideing error
detection from a cyclic redundancy check (CRC)  


Ethernet cables  

3 types 
straight-through, crossover, rollover  
4 wire pairs  

a crossover cable uses the same four wires as a straight through cable just with different pins connect  

Crossover Cables  
- switch to switch  
- swtich to hub  
- hub to hub  
- router to router  
- router to pc  
- pc to pc  


Straight through cables  
- switch to router  
- switch to pc  
- switch to server  
- hub to pc  
- hub to server  

Crossover Gigabit ethernet  
Rolled Ethernet cable 

Data Encapasulation  
data packaging method for transmission across a network  

PDU  Protocol Data Unit  






> TCP/Ip       

Transmission Control Protocol, Internet Protocol 



Ip addresing  

192.168.1.1  
11000000.10101000.00000001.00000001  

1 octet or bite is made of 8 bits  
4 octess make an ip address  

             8 bits  8 bits  8 bits    8 bits   
Class A:    Network   Host    Host     Host  
Class B:    Network  Network  Host     Host  
Class C:    Network  Network  Network  Host  
Class D:    Multicast  
Class E:    Research  


In Class A  
the first bit in the first octet must be 0  
0xxxxxxx.xxxxxxxx.xxxxxxxx.xxxxxxxx  
00000000 = 0  
01111111 = 127  
First octet range: 1-126  


In Class B  
the first 2 bits in the first octet must be 10  
10xxxxxx.xxxxxxxx.xxxxxxxx.xxxxxxxx  
10000000 = 128  
10111111 = 191  
First octet range: 128-191  

In Class C  
the first 3 bits in first octet must be 110  
110xxxxx.xxxxxxxx.xxxxxxxx.xxxxxxxx  
11000000 = 192  
11011111 = 223  
First octet range: 192-223  


RFC 1918  

Defines Private and Public IP address  

Private Ip addresses cannot be routed through the internet  
and are schemed to conserver public addresses   
Private IPv4 Addresses  
Class A   =>  10.0.0.0 to 10.255.255.255  
Class B   =>  172.16.0.0 to 172.31.255.255  
Class C   =>  192.168.0.0 to 192.168.255.255  




> Subnetting  

Creating subnets is essential to network management  
Subnetting works by borrowing bits from the host address to create smaller networks  
borrowing more bits decreases size of subnet  
without subnets all users would be in on single broadcast domain  

Subnet block sizing  
subnet mask: defines the host portion of an IP address , its a 32 bit value that allows the device receiving the ip packet to distinguish the network id portion of the ip portion from the host id portion of the ip address   
IP: 192.168.1.1  
mask: 255.255.255.0  

Class A => 255.0.0.0 	   first 1 byte represent the network, and the last 3 bytes represents the host   
Class B => 255.255.0.0  
Class C => 255.255.255.0  


CIDR - Classless Inter Domain Routing   
     - no of bits in the 32 bit mask that are turned on  
Class A => 255.0.0.0 	   /8   
Class B => 255.255.0.0      /16  
Class C => 255.255.255.0     /24  

Binary for subnets  
bits binary      decimal  
0    00000000    0  
1    10000000    128  
2    11000000    192  
3    11100000    224  
4    11110000    240  
5    11111000    248  
6    11111100    252  
7    11111110    254  
8    11111111    255  
 
subnet mask     block size  
256-128         128  
256-192         64  
256-224         32  
256-240         16  
256-248         8  
256-252         4  
256-254         2  
256-255         1  


With an ip address and subnet mask you can determine the network and broadcast  
adress of that hosts subnet  
find block size  
find broadcast by decrementing network address by 1  
addresses b/w network and broadcast define host  




> VLSM based Network design  

VLSM  : uses different mask on different segments in network (classless)  
Variable Length Subnet Mask  
RIPv1  - a classful routing protocol  
VLSM is supported by RIPv2, EIGRP, OSPF  




> IP routing 


You can easily use Linux as an internetworking device and connect hosts together   
on local networks and connect local networks together and to the Internet.  

The differences between layer 2 and layer 3 internetworking  
How to configure IP routing and bridging in Linux  
How to configure advanced Linux internetworking, such as VLANs, VXLAN, and network packet filtering  


To create an internetwork, you need to understand layer 2 and  
layer 3 internetworking, MAC addresses, bridging, routing, ACLs, VLANs, and VXLAN.

Layer 2 networking works in one of two ways:  
- The device has explicit knowledge of a frame’s destination address, and the device sends the  
frame out on the port where it knows the destination exists.  
- In the event that the specific destination is unknown, the device falls back to sending the frame  
to every node in the layer 2 domain via what is known as a broadcast  

Broadcast Domain  
In Ethernet networking, layer 2 broadcasts don’t go past routers because that is the boundary  
of the layer 2 network. Thus, the entire Ethernet network is the broadcast domain because no  
broadcasts pass the Ethernet LAN.  



Bridging  
What do you do when you have two different Ethernet networks that need connecting? Build a bridge!  
Bridges have traditionally been dedicated hardware devices, but you can easily create a bridge in Linux.  
For example, when you have a Linux host that has two or more network interfaces, you can create a  
bridge to pass traffic between these interfaces. You can add two interfaces to a Linux bridge with ip  
link set and ip link add using:  
david@debian:~$ sudo ip link add br0 type bridge  
david@debian:~$ sudo ip link set eth0 master br0  
david@debian:~$ sudo ip link set eth1 master br0  
Here’s what is happening:  
- The first command, ip link add, is creating a bridge named br0.  
- The two ip link set commands add the two Ethernet interfaces, eth0 and eth1, to the new  
bridge resulting in a connection between these two interfaces.  
Once a bridge is created, you can view the MAC address table, which shows which ports can reach a  
specific MAC address, with the bridge command. The command shown in the example below uses  
fdb show as its parameter. In this command, fdb stands for forwarding database management, and  
show is a way for you to see the current contents of this database:  
david@debian:~$ sudo bridge fdb show  

Spanning Tree  
The downside to big networks is that you can accidentally create loops that feed upon themselves and  
that can ultimately bring the network down. For example, if you accidentally plug one switch port  
directly into another port on the same switch, you may have created a loop. You can mitigate these loops  
through the use of spanning trees. It’s also important to note that layer 3 has a TTL (time to live) field  
that reduces the impact of loops — packets eventually die and are dropped — while layer 2 does not  
have a TTL and will loop a frame forever.  


LANs are configured using both the ip link and  
bridge Linux commands.  


Two Linux hosts connected with VXLAN  
Linux System 1  
sudo ip link add br0 type bridge vlan_filtering 1  
sudo ip link add vlan10 type vlan id 10 link bridge protocol none  
sudo ip addr add 10.0.0.1/24 dev vlan10  
sudo ip link add vtep10 type vxlan id 1010 local 10.1.0.1 remote 10.3.0.1 learning  
sudo ip link set eth1 master br0  
sudo bridge vlan add dev eth1 vid 10 pvid untagged  
Linux System 2  
sudo ip link add br0 type bridge vlan_filtering 1  
sudo ip link add vlan10 type vlan id 10 link bridge protocol none  
sudo ip addr add 10.0.0.2/24 dev vlan10  
sudo ip link add vtep10 type vxlan id 1010 local 10.3.0.1 remote 10.1.0.1 learning  
sudo ip link set eth1 master br0  
sudo bridge vlan add dev eth1 vid 10 pvid untagged  
Now these two systems both exist on the 10.0.0.x/24 layer 2 network (via the VXLAN overlay) even  
though they are connected by a layer 3 IP fabric. It’s also worth noting that the hosts are completely isolated from the underlying layer 3 network.  







Links:  

https://www.actualtechmedia.com/wp-content/uploads/2018/01/CUMULUS-Understanding-Linux-Internetworking.pdf  
https://www.novell.com/documentation/suse91/suselinux-adminguide/html/ch14.html  
https://www.cs.unh.edu/cnrg/people/gherrin/linux-net.html  



> Layer2 Switching  


> VLAN and InterVLAN routing  



> Access Lists  



> NAT  

Network Address Translation  


> IPv4 and IPv6  






[Using Curl telnet to test port connectivity](https://kb.vmware.com/s/article/2097039)  
curl -v telnet://target ip address:desired port number



# Links  

[https://www.javatpoint.com/cloud-computing-tutorial](https://www.javatpoint.com/cloud-computing-tutorial)  
[https://www.javatpoint.com/ethical-hacking-tutorial](https://www.javatpoint.com/ethical-hacking-tutorial)  
[https://www.javatpoint.com/computer-network-tutorial](https://www.javatpoint.com/computer-network-tutorial)  
[https://www.javatpoint.com/cyber-security-tutorial](https://www.javatpoint.com/cyber-security-tutorial)  
[https://www.strongdm.com/blog/difference-between-proxy-and-reverse-proxy](https://www.strongdm.com/blog/difference-between-proxy-and-reverse-proxy)  

