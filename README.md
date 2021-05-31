# pokemon_json_parser
Just a JSON parser for a friend's Pokedex API using C++


Usage
============

Linux
-----

Most Linux distributions provide a package that can be installed using the
system package manager, for example:

```bash

    # Debian, Ubuntu, etc.
    $ sudo apt-get install -y nlohmann-json-dev.
```
```bash

    # Arch Linux / Manjaro
    $ sudo pamac install nlohmann-json
    or
    $ sudo pacman -S nlohmann-json
```

Windows
-----

Just download [`json.hpp`](https://github.com/nlohmann/json/blob/develop/single_include/nlohmann/json.hpp). <br> This is the single required file in `single_include/nlohmann` or [released here](https://github.com/nlohmann/json/releases). You need to add
```cpp
#include <nlohmann/json.hpp>

// for convenience
using json = nlohmann::json;
```
