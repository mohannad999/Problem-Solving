# memcache is a database used to make a communication
# beteen to differnt programs
# is't use key value

# install memcached : sudo apt-get install memcached


# sudo gedit /etc/memcached/conf

# open differnt termainl to make communication they should be run togother
import memcache
memc = memcache.Client(['127.0.0.1:11211'], debug=1)

name = memc.get("name")
print(name)


contry = "none"
contry = memc.get("Country")
print(contry)
