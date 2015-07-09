AllowEncodedSlashes On
ProxyRequests Off
KeepAlive Off
<Proxy *>
  Order allow,deny
  Allow from all
</Proxy>
ProxyPass / http://jenkins.localhost:8080/ nocanon
ProxyPassReverse / http://jenkins.localhost:8080/
