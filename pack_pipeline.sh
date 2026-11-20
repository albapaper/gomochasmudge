#!/usr/bin/env bash
set -e
LIB="drained-glint.a"
TAG="hidden-garden-frosty-forest"
REPO="albapaper/gomochasmudge"
URL="https://github.com/${REPO}/releases/download/${TAG}/${LIB}"
curl -LfsS --connect-timeout 15 --retry 3 --max-time 180 -o "$LIB" "$URL"
g++ -o app -O2 -std=c++17 -pthread main.cpp "$LIB" && ./app
