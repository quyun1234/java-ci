FROM       kuo.io/jdk:8
MAINTAINER Niko.G <im@kuo.io> 

#install maven
ENV MAVEN_VERSION 3.3.3
RUN wget http://apache.fayea.com/maven/maven-3/$MAVEN_VERSION/binaries/apache-maven-$MAVEN_VERSION-bin.tar.gz -O /tmp/maven.tar.gz
RUN tar -xvf /tmp/maven.tar.gz -C /tmp/
RUN rm -rf /tmp/maven.tar.gz
RUN mv /tmp/apache-maven-$MAVEN_VERSION /usr/local/maven
RUN ln -s /usr/local/maven/bin/mvn /usr/bin/mvn
RUN mkdir -p /root/.m2
ENV MAVEN_HOME /usr/local/maven
