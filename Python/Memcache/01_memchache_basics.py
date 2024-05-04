# memcache is a database used to make a communication
# beteen to differnt programs
# is't use key value

# install memcached : sudo apt-get install memcached


# sudo gedit /etc/memcached/conf

import memcache
memc = memcache.Client(['127.0.0.1:11211'], debug=1)
memc.set("name", "mohannad")
name = memc.get("name")
print(name)

# set data in the memroy for a certen a mount of time then It's will disapper
memc.set("Country", "Jordan", 20)
