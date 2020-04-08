#!/bin/bash

python3 ./scripts/generate-thing-config.py --config ./thing-data-configs.json
mv *.h ../data-river
if [ -d ../data-river/config ]; then
    rm -rf ../data-river/config
fi
if [ -d ../data-river/definitions/ThingClass ]; then
    rm -rf ../data-river/definitions/ThingClass
fi
mv config ../data-river
mv definitions/ThingClass ../data-river/definitions
rm -rf config
rm -rf definitions
