<Proxy balancer://lb>
BalancerMember http://console.localhost keepalive=On
ProxySet lbmethod=bybusyness
ProxySet stickysession=JSESSIONID|jsessionid
ProxySet scolonpathdelim=On
</Proxy>

ProxyPass / balancer://lb/
ProxyPassReverse / balancer://lb/

