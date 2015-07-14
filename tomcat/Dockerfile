FROM       kuo.io/jdk:8
MAINTAINER Niko.G <im@kuo.io>

#install tomcat
ENV TOMCAT_VERSION 7.0.63
RUN wget http://apache.fayea.com/tomcat/tomcat-7/v$TOMCAT_VERSION/bin/apache-tomcat-$TOMCAT_VERSION.zip -O /tmp/tomcat.zip
RUN unzip /tmp/tomcat.zip -d /tmp/
RUN rm -rf /tmp/tomcat.zip
RUN mkdir -p /data
RUN mv /tmp/apache-tomcat-$TOMCAT_VERSION /data/tomcat
RUN chmod 777 /data/tomcat/bin/*.sh
ENV CATALINA_HOME /data/tomcat

#install tomcat-native
RUN yum -y install openssl openssl-devel apr-devel
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

ADD bin /data/bin
RUN chmod +x /data/bin/*.sh

EXPOSE 8080 8443

CMD ["/data/bin/start-tomcat.sh"]

