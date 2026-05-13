# Documentação prévia do código em Python

## Inicialização

```bash
$sudo python3 vulnerable_server.py
```
---
## vulnerable_server.py
```python
from http.server import BaseHTTPRequestHandler, HTTPServer
import subprocess
import urllib.parse

class VulnerableHandler(BaseHTTPRequestHandler):

    def do_GET(self):

        query = urllib.parse.urlparse(self.path).query
        params = urllib.parse.parse_qs(query)

        cmd = params.get("cmd", [""])[0]

        try:
            output = subprocess.check_output(
                cmd,
                shell=True,
                stderr=subprocess.STDOUT,
                text=True
            )

            self.send_response(200)
            self.end_headers()
            self.wfile.write(output.encode())

        except Exception as e:
            self.send_response(500)
            self.end_headers()
            self.wfile.write(str(e).encode())

server = HTTPServer(("0.0.0.0", 8080), VulnerableHandler)

print("Servidor vulnerável rodando...")
server.serve_forever()
```

---
## Funcionalidades eq REST API

```linux
- http://localhost:8080/?cmd=ls - Listar todos os diretorios
- http://localhost:8080/?cmd=whoami - Listar tipo de usuario
- http://localhost:8080/?cmd=ls%20-l - Listar -l
```

