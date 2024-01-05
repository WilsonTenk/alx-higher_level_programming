#!/bin/bash
# send a request n only show de status code
curl -s -o /dev/null -I --w "%{http_code}" "$1"
