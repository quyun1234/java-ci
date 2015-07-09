FROM kuo.io/httpd:centos6
MAINTAINER Niko.G <niko.guo@gmail.com>

RUN mkdir -p /data/wwwconf
ADD wwwconf/conf.d /data/wwwconf/conf.d
ADD wwwconf/conf/httpd.conf /etc/httpd/conf/httpd.conf

RUN mkdir -p /data/wwwroot/hub.kuo.io
RUN mkdir -p /data/wwwroot/jenkins.kuo.io
RUN mkdir -p /data/wwwroot/console.kuo.io

RUN mkdir -p /data/logs/httpd

