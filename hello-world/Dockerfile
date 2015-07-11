FROM       kuo.io/maven:3
MAINTAINER Niko.G <im@kuo.io> 

RUN mkdir -p /data
WORKDIR /data
RUN git clone https://github.com/Guuuo/javaweb-hello-world.git

WORKDIR /data/javaweb-hello-world
RUN mvn install

WORKDIR /
