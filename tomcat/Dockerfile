FROM       kuo.io/jdk:8
MAINTAINER Niko.G <im@kuo.io>

#install tomcat
ENV TOMCAT_VERSION 7.0.62
RUN wget http://mirrors.cnnic.cn/apache/tomcat/tomcat-7/v$TOMCAT_VERSION/bin/apache-tomcat-$TOMCAT_VERSION.zip -O /tmp/tomcat.zip
RUN unzip /tmp/tomcat.zip -d /tmp/
RUN rm -rf /tmp/tomcat.zip
RUN mkdir -p /data
RUN mv /tmp/apache-tomcat-$TOMCAT_VERSION /data/tomcat
RUN chmod 777 /data/tomcat/bin/*.sh

#install make
#RUN yum -y install gcc automake autoconf libtool make
#install openssl openssl-dev apr-devel
RUN yum -y install openssl openssl-devel apr-devel
#install tomcat-native
RUN cp /data/tomcat/bin/tomcat-native.tar.gz /tmp/tomcat-native.tar.gz 
RUN tar zxvf /tmp/tomcat-native.tar.gz -C /tmp; rm -rf /tmp/tomcat-native.tar.gz
RUN mv /tmp/tomcat-native-*-src /tmp/tomcat-native
WORKDIR /tmp/tomcat-native/jni/native
RUN chmod +x ./configure
RUN chmod +x ./build/*.sh
RUN ./configure --with-apr=/usr/bin/apr-1-config --with-java-home=$JAVA_HOME --with-ssl=yes
RUN make & make install
RUN rm -rf /tmp/tomcat-native
#config apr
ENV LD_LIBRARY_PATH /usr/local/apr/lib

ADD scripts /scripts

EXPOSE 8080 8443

ENTRYPOINT ["/scripts/run"]
