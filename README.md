Steps to create HarmonizePP submodules:

<p>git submodule add -b master https://github.com/evildead/QMidi.git externals/qmidi</p>
<p>git submodule add -b master https://github.com/evildead/DSTD.git externals/dstd</p>
<p>git submodule update --init --recursive</p>

<p>If the qmidi or dstd repositories change and you want to pull the latest code down, just issue the (git submodule update --init --recursive) command again.</p>

