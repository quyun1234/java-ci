<Proxy balancer://lb>
BalancerMember http://jenkins.localhost:8080 keepalive=On
ProxySet lbmethod=bybusyness
ProxySet stickysession=JSESSIONID|jsessionid
ProxySet scolonpathdelim=On
</Proxy>

ProxyPass / balancer://lb/
ProxyPassReverse / balancer://lb/

