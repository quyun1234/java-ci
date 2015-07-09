FROM centos:centos6
MAINTAINER Niko.G <niko.guo@gmail.com>

#install httpd
RUN yum -y install httpd mod_ssl openssl
RUN yum clean all

EXPOSE 80 443

ADD bin/run-httpd.sh /usr/bin/run-httpd.sh
RUN chmod -v +x /usr/bin/run-httpd.sh

CMD ["/usr/bin/run-httpd.sh"]
