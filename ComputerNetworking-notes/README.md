# ComputerNetworking-notes

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



Cisoc 3 layer model  



TCP/Ip       [ Transmission Control Protocol, Internet Protocol ]  



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




Subnetting  

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













## Web securitk
