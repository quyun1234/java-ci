FROM       centos:centos7
MAINTAINER Niko.G <im@kuo.io>

#ENV TZ "Asia/Shanghai"
ENV TERM xterm

#ADD aliyun-mirror.repo /etc/yum.repos.d/CentOS-Base.repo
#ADD aliyun-epel.repo /etc/yum.repos.d/epel.repo

RUN yum install -y curl wget tar bzip2 unzip vim-enhanced passwd sudo yum-utils hostname net-tools rsync man && \
    yum install -y gcc gcc-c++ git make automake cmake patch logrotate python-devel libpng-devel libjpeg-devel && \
    yum clean all

EXPOSE 22
