#!/bin/bash
# sends GET reqst t URL and displays the body of the response
curl -sfL "$1" -X GET
