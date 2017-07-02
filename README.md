Steps to create HarmonizePP submodules:

git submodule add https://github.com/evildead/QMidi.git externals/qmidi
git submodule add https://github.com/evildead/DSTD.git externals/dstd
git submodule update --init --recursive

If the qmidi or dstd repositories change and you want to pull the latest code down, just issue the (git submodule update --init --recursive) command again.
