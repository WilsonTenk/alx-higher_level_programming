#!/bin/bash
# sends a GET request with header variable as 'X-School-User-Id' with variable 98
curl -sH "X-School-User-Id: 98" "$1"
