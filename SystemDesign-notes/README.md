# SystemDesign-notes

- OOPs  
- Design Patterns  
- Software Architecture  
- Service Oriented Architecture  


## Object Oriented Design  

How to know if a software is well designed  
- did a small code change produce a ripple-effect fro changes elsewhere in the code  
- was the code hard to reuse  
- was software difficult to maintain after a release  








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


[Scaling Push Messaging for Millions of Devices @Netflix](https://youtu.be/6w6E_B55p0E)
[Difference between Client Polling vs Server Push in Notifications](https://youtu.be/8D1NAezC-Dk)
[Long Polling and how it differs from Push, Poll and SSE - The Backend Engineering Show](https://youtu.be/J0okraIFPJ0)
[Designing Notifications Service for Instagram](https://youtu.be/kIP8L-CSl2Y)
[Robinhood Stock Exchange System Design | How to Receive Realtime Stock Updates](https://youtu.be/gQfaWHOrITI)
[Scaling hotstar.com for 25 million concurrent viewers](https://youtu.be/QjvyiyH4rr0)  
[Payment Gateway - All you need to know! - Yadvendra Tyagi, PayU](https://youtu.be/yt3My3vUBXo)  
[Architecting a Modern Financial Institution](https://youtu.be/VYuToviSx5Q)  
[Building a scalable data platform at Hotstar](https://youtu.be/yeNTdAYdfzI)  
[Scaling Facebook Live Videos to a Billion Users](https://youtu.be/IO4teCbHvZw)  
[Scaling Instagram Infrastructure](https://youtu.be/hnpzNAPiC0E)  
[What I Wish I Had Known Before Scaling Uber to 1000 Services • Matt Ranney • GOTO 2016](https://youtu.be/kb-m2fasdDY)  
[Streaming a Million Likes/Second: Real-Time Interactions on Live Video](https://youtu.be/yqc3PPmHvrA)  


[System Design Mock Interview: Design TikTok ft. Google TPM](https://youtu.be/Z-0g_aJL5Fw)  





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

[https://medium.com/@narengowda/designing-the-caching-system-e42c6938df6a](https://medium.com/@narengowda/designing-the-caching-system-e42c6938df6a)  
[https://aws.amazon.com/elasticache/](https://aws.amazon.com/elasticache/)  



[https://www.cs.utah.edu/~germain/PPS/Topics/interfaces.html](https://www.cs.utah.edu/~germain/PPS/Topics/interfaces.html)  


[https://medium.com/analytics-vidhya/how-to-create-a-thread-safe-singleton-class-in-python-822e1170a7f6](https://medium.com/analytics-vidhya/how-to-create-a-thread-safe-singleton-class-in-python-822e1170a7f6)  



[https://medium.com/shoutloudz/system-design-hld-vs-lld-26c717dc244c](https://medium.com/shoutloudz/system-design-hld-vs-lld-26c717dc244c)

[https://mecha-mind.medium.com/ml-system-design-eta-prediction-9dc8000fd86b](https://mecha-mind.medium.com/ml-system-design-eta-prediction-9dc8000fd86b)
[https://dzone.com/articles/designing-a-real-time-eta-prediction-system-using](https://dzone.com/articles/designing-a-real-time-eta-prediction-system-using)
[https://cloud.google.com/community/tutorials/cloud-iot-enviro-board-workshop](https://cloud.google.com/community/tutorials/cloud-iot-enviro-board-workshop)
[https://medium.com/analytics-vidhya/database-normalization-vs-denormalization-a42d211dd891](https://medium.com/analytics-vidhya/database-normalization-vs-denormalization-a42d211dd891)
[https://kasvith.me/posts/lets-create-a-simple-lb-go/](https://kasvith.me/posts/lets-create-a-simple-lb-go/)  



[https://www.jfrog.com/confluence/display/JFROG/S3+Object+Storage](https://www.jfrog.com/confluence/display/JFROG/S3+Object+Storage)  
[https://medium.com/@serveradmns.seo/how-to-implement-load-balancing-in-database-servers-7ad2b35cc943](https://medium.com/@serveradmns.seo/how-to-implement-load-balancing-in-database-servers-7ad2b35cc943)
[https://severalnines.com/blog/how-does-database-load-balancer-work/](https://severalnines.com/blog/how-does-database-load-balancer-work/)
[https://dev.to/aws-builders/using-aws-s3-as-a-database-17l0](https://dev.to/aws-builders/using-aws-s3-as-a-database-17l0)  
[https://docs.aws.amazon.com/AmazonS3/latest/userguide/optimizing-performance.html](https://docs.aws.amazon.com/AmazonS3/latest/userguide/optimizing-performance.html)  
[https://aws.amazon.com/blogs/aws/amazon-s3-performance-tips-tricks-seattle-hiring-event/](https://aws.amazon.com/blogs/aws/amazon-s3-performance-tips-tricks-seattle-hiring-event/)  
[http://highscalability.com/blog/2012/3/7/scale-indefinitely-on-s3-with-these-secrets-of-the-s3-master.html](http://highscalability.com/blog/2012/3/7/scale-indefinitely-on-s3-with-these-secrets-of-the-s3-master.html)  
[http://highscalability.com/unorthodox-approach-database-design-coming-shard](http://highscalability.com/unorthodox-approach-database-design-coming-shard)  
[https://blog.pollett.co.uk/aws-s3-at-speed/](https://blog.pollett.co.uk/aws-s3-at-speed/)  
[https://aws.amazon.com/blogs/media/upload-and-transcode-video-with-aws-elemental-mediaconvert-and-magine-pro/](https://aws.amazon.com/blogs/media/upload-and-transcode-video-with-aws-elemental-mediaconvert-and-magine-pro/)  
[https://en.wikipedia.org/wiki/Adaptive_bitrate_streaming](https://en.wikipedia.org/wiki/Adaptive_bitrate_streaming)  
[https://en.wikipedia.org/wiki/Server-sent_events](https://en.wikipedia.org/wiki/Server-sent_events)  


