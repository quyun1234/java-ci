docker run --name proxy --restart=always --link jenkins:jenkins.localhost --link csphere-controller:console.localhost -p 80:80 -p 443:443 -t -i kuo.io/proxy
