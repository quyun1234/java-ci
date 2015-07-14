#!/bin/bash
date
echo "Starting Tomcat"
export CATALINA_PID=/tmp/$$
#export JAVA_HOME=/data/jdk
export JAVA_OPTS="-Xms128m -Xmx192m"

. /data/tomcat/bin/catalina.sh start

echo "Waiting for `cat $CATALINA_PID`"
wait `cat $CATALINA_PID`
