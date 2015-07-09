<Proxy balancer://lb>
BalancerMember http://registry.localhost:5000 keepalive=On
ProxySet lbmethod=bybusyness
ProxySet stickysession=JSESSIONID|jsessionid
ProxySet scolonpathdelim=On
</Proxy>

ProxyPass / balancer://lb/
ProxyPassReverse / balancer://lb/

