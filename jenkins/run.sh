docker run -d -p 8080:8080 --restart=always --name jenkins -v /usr/bin/docker:/usr/bin/docker -v /var/run/docker.sock:/var/run/docker.sock kuo.io/jenkins:1.6
