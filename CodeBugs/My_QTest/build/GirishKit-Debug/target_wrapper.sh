#!/bin/sh
LD_LIBRARY_PATH=/home/girish-v-b/qt-bugfix/qt-install/lib${LD_LIBRARY_PATH:+:$LD_LIBRARY_PATH}
export LD_LIBRARY_PATH
QT_PLUGIN_PATH=/home/girish-v-b/qt-bugfix/qt-install/plugins${QT_PLUGIN_PATH:+:$QT_PLUGIN_PATH}
export QT_PLUGIN_PATH
exec "$@"
