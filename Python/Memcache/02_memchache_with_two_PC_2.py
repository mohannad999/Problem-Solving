import memcache
#make sure that both computer have memchache 
# to check if the memecache is running ->  ps -ef | grep memcache
# you have to change the defult settings of the memchace 
# sudo gedit /etc/memcached/conf 
# change the IP 
# restart the memchace -> sudo systemctl restart memcached 
# check the memchaced status  -> sudo systemctl status memcached 

memc =memcache.Client(['192.168.10.129:11211' ,'192.168.10.208:11211'],debug=1)

name =memc.get("name","mohannad")
print(f"name :{name}")