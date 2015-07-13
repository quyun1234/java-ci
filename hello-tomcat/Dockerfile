FROM       kuo.io/tomcat:7
MAINTAINER Niko.G <im@kuo.io> 

RUN mkdir -p /data
WORKDIR /data
RUN git clone https://github.com/Guuuo/javaweb-hello-world.git

WORKDIR /data/javaweb-hello-world
RUN mvn install

WORKDIR /

RUN mv /data/javaweb-hello-world/target/*.war /data/
