# DBMS




## database design  

https://app.quickdatabasediagrams.com  
https://www.quickdatabasediagrams.com  
https://www.lucidchart.com  
https://sqldbm.com  
https://app.sqldbm.com  
https://dbdigram.io  




ERD:  Entity Relationship Diagram  

CRUD


primary keys
attribute data types  


database normalization  
database denormaliztion







Relatioal database  
Graph database  
Document databases  




Database Sharding / Partitioning  



## Designing Highly Scalable and Available databases  


Sales transaction  
Geolocation data  


Compliance 

What data  
How much data  
How data is used  


Human scale ingestion applications  
High availability architectures  
B-Tree indexes  


relational database concepts.  
tables, columns, indexes and partitioning  
SQL  
data modeling  
servers, storage and networking  


```
########### scalable databases  


== Considerations:

architecture depends on business requirements  
how much data need to be stored  
whats the lifecycle of data  
who should have access to what data  
how can we scale it  
how to improve the availability of the data  
whats the structure of data  
organization of data  
current volume of data 
rate of ingestion  
rate of growth  
duration of lifecycle  
how data is used ( transactions, monitoring, compliance, decision making )  
data can be used for interactive transactions in support of domain event or process  
data can be aggregated for business decision-making  
data can be alerting on anomalous events  
data can be training machine learning models  
domain specific entities ( sales, inventory, logistics )
how the entities relate to each other  
identify the attributes of that entities  
how data changes over time  
where does the data originate  
how much data will be needed  
what domain event lead to generation of new data  
expected rate of growth in data generation  
over time will data be aggregated or reduced  



== use cases of data  
sales transaction  
geolocation data  

how data is generated, ingested and stored  
how data is used, reported, analyzed and visualized  

== access patterns  

read-write intensive  (transaction processing, low latency read and write required)  
bulk load intensive  (data warehousing, more tolerant of higher latency but query larger data sets)  

== sales tansactions  

ecommerce marketplace  
update finace and inventory databases  
sale data aggregated in a data warehouse  

== equipment monitoring  

sensors collecting data 
stream of data analyzed for anomalous events  

== customer engagement  

sales, website browsing, product reviews, demographics  
data engineers collect, transfor, and store data 

workloads  
multistep  
dependencies  

== security and compliance  

who can do what to which data  
identity and access management  
encryption in tansit and at rest  

== availability  

reliable  
replication of data  
if disruption, restore within recovery point  








```



