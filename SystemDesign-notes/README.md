# SystemDesign-notes




## Apache Kafka  

[Apache Kafka for Biginers](https://youtube.com/playlist?list=PLt1SIbA8guusxiHz9bveV-UHs_biWFegU)  

apache kafka crash course  
[https://youtu.be/R873BlNVUB4](https://youtu.be/R873BlNVUB4)  
[https://github.com/hnasr/javascript_playground/tree/master/kafka](https://github.com/hnasr/javascript_playground/tree/master/kafka)  

```
docker run --name zookeeper -p 2181:2181 zookeeper  


docker run --name kafka -p 9092:9092 
-e KAFKA_ZOOKEEPER_CONNECT=<your machine name on which zookeeper is running>:2181 kafka 
-e KAFKA_ADVERTISED_LISTENERS=PLAINTEXT://<your machine name on which zookeeper is running>:9092
-e KAFKA_OFFSETS_TOPIC_REPLICATION_FACTOR=1 confluentic/cp-kafka  


You need to spicy the address of you zookeerper to kafka
When we do kafka we need to expose the address of the broker to your clients producer and consumer,
for that you need to tell kafka broker your address, because you can have multiple listeners in one
kafka cluster 
Kafka supports ssl and plaintext communication
Kafka by default spin up 3 instances, so you need to specifically mention the no of offsets


Start a nodejs project

initialize the project

npm init -y 


npm install kafakjs

files:
- topic.js
- producer.js
- consumer.js

```

## RabbitMQ

RabbitMQ Crash Course  
[https://youtu.be/Cie5v59mrTg](https://youtu.be/Cie5v59mrTg)  



#### topics  


Performance vs scalability  
Latency vs throughput  
Availability vs consistency  
  
CAP theorem  
    CP - consistency and partition tolerance  
    AP - availability and partition tolerance  
  
Consistency patterns  
    Weak consistency  
    Eventual consistency  
    Strong consistency  
  
Availability patterns  
    Fail-over  
    Replication  
    Availability in numbers  
  
Domain name system  
  
Content delivery network  
    Push CDNs  
    Pull CDNs  
  
Load balancer  
    Active-passive  
    Active-active  
    Layer 4 load balancing  
    Layer 7 load balancing  
    Horizontal scaling  
  
Reverse proxy (web server)  
    Load balancer vs reverse proxy  
  
Application layer  
    Microservices  
    Service discovery  
  
Database  
    Relational database management system (RDBMS)  
        Master-slave replication  
        Master-master replication  
        Federation  
        Sharding  
        Denormalization  
        SQL tuning  
    NoSQL  
        Key-value store  
        Document store  
        Wide column store  
        Graph Database  
    SQL or NoSQL  
  
Cache  
    Client caching  
    CDN caching  
    Web server caching  
    Database caching  
    Application caching  
    Caching at the database query level  
    Caching at the object level  
    When to update the cache  
        Cache-aside  
        Write-through  
        Write-behind (write-back)  
        Refresh-ahead  
  
Asynchronism  
  
    Message queues  
    Task queues  
    Back pressure  
  
Communication  
  
    Transmission control protocol (TCP)  
    User datagram protocol (UDP)  
    Remote procedure call (RPC)  
    Representational state transfer (REST)  


Security  


#### Cloud Computing
- Serverless
- IaaS
- PaaS
- SaaS
- Containers
- Virtualization


#### How Internet Work
- HTTP/S
- Database
- CDN
- Load Balancer
- DNS
- TCP
- App Server
- Web Se Frontend


#### Networking
- Virtual Private Cloud
- Software defined networking
- Interconnect
- VPN


#### Scaling
- Horizontal Scaling
- Vertical Scaling
- Autohealing
- Autoscaling


> macro and micro components of System Design.

How to approach System Design
Online/Offline indicator
Scaling and Caching strategy 
Delegation and Async Processing
Supporting million concurrent users
Designing communication paradigm
Databases

> scaling databases, SQL,NoSQL,Embedded

SQL Transactions
Database Indexes and Locking
Designing SQL backed KV Store
Scaling relational databases
NoSQL databases

> distributed Systems

Key to a good distributed system
Designing Load Balancers
Remote and distributed locks


> building persistent, reliable and durable storage engines

Designing Distributed Caches
Consistent Hashing: Application and Implementation

> making heavily concurrent and throughput systems

Designing S3
Designing LSM Trees
Designing Video Processing Pipeline
Designing Flash Sale
IR Systems and Adhoc Designs

> building Information Retrieval Systems and adhoc systems.

Designing Search Engines
Designing Realtime Recommendation System
Distributed Task Scheduler
Designing Message Brokers like SQS
Building Algorithmic Systems


> systems intelligent algorithm.

API Rate Limiter
Algorithm behind File Sync
Algorithm behind Tinder
Approximation Algorithms
Algorithm for place locator




#### Designing REST APIs






#### Microservice design patterns  









# Links  


[Backend Engineering Bigginer](https://youtube.com/playlist?list=PLQnljOFTspQUNnO4p00ua_C5mKTfldiYT)  
[Backend Engineering Intermediate](https://youtube.com/playlist?list=PLQnljOFTspQWGuRmwojJ6LiV0ejm6eOcs)  
[Backend Engineering Advanced](https://youtube.com/playlist?list=PLQnljOFTspQUybacGRk1b_p13dgI-SmcZ)  

[https://blog.discord.com/how-discord-stores-billions-of-messages-7fa6ec7ee4c7](https://blog.discord.com/how-discord-stores-billions-of-messages-7fa6ec7ee4c7)  
[https://towardsdatascience.com/ace-the-system-interview-design-a-chat-application-3f34fd5b85d0](https://towardsdatascience.com/ace-the-system-interview-design-a-chat-application-3f34fd5b85d0)  
[https://arpitbhayani.me/blogs](https://arpitbhayani.me/blogs)  
[https://www.javatpoint.com/aws-sqs](https://www.javatpoint.com/aws-sqs)  
[https://www.javatpoint.com/aws-kinesis](https://www.javatpoint.com/aws-kinesis)  
[https://www.javatpoint.com/aws-swf](https://www.javatpoint.com/aws-swf)  
[https://www.javatpoint.com/selenium-tutorial](https://www.javatpoint.com/selenium-tutorial)  
[https://aws.amazon.com/msk/what-is-kafka/](https://aws.amazon.com/msk/what-is-kafka/)  
[https://aws.amazon.com/blogs/big-data/best-practices-for-running-apache-kafka-on-aws/](https://aws.amazon.com/blogs/big-data/best-practices-for-running-apache-kafka-on-aws/)  
[https://aws.amazon.com/msk/](https://aws.amazon.com/msk/)  
[Apache Kafka for Beginners](https://youtube.com/playlist?list=PLt1SIbA8guusxiHz9bveV-UHs_biWFegU)  
[https://www.freecodecamp.org/news/systems-design-for-interviews/](https://www.freecodecamp.org/news/systems-design-for-interviews/)  
[https://github.com/donnemartin/system-design-primer](https://github.com/donnemartin/system-design-primer)  
[https://github.com/donnemartin/interactive-coding-challenges](https://github.com/donnemartin/interactive-coding-challenges)  
[Publish-Subscribe Architecture (Explained by Example)](https://youtu.be/O1PgqUqZKTA)  
[RabbitMQ Crash Course](https://youtu.be/Cie5v59mrTg)  

[https://medium.com/@narengowda/netflix-system-design-dbec30fede8d](https://medium.com/@narengowda/netflix-system-design-dbec30fede8d)  
[Live Streaming Architecture](https://youtu.be/RvsaosnEHWc)  
[https://nordicapis.com/whats-the-difference-between-event-brokers-and-message-queues/](https://nordicapis.com/whats-the-difference-between-event-brokers-and-message-queues/)  

[https://www.tecmint.com/open-source-caching-tools-for-linux/](https://www.tecmint.com/open-source-caching-tools-for-linux/)  

