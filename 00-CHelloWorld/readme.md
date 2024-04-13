# 00-helloWorld


se ejecuta la aplicacion desde un entorno linux(Ubuntu 22.04.4 LTS) utilizando visual studio code como IDE.

la vesion del compilador se encuentra especificada dentro del archivo task.json

...
  "type": "cppbuild",
            "label": "C/C++: gcc-11 build active file",
            "command": "/usr/bin/gcc-11",
...

para redireccionar la salida a un archivo .txt se utilizo el siguiente comando:

./hello_world > hello_world.txt