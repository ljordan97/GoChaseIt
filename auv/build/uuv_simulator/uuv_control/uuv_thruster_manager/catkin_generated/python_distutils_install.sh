#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/robond/workspace/auv/src/uuv_simulator/uuv_control/uuv_thruster_manager"

# snsure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/robond/workspace/auv/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/robond/workspace/auv/install/lib/python2.7/dist-packages:/home/robond/workspace/auv/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/robond/workspace/auv/build" \
    "/usr/bin/python" \
    "/home/robond/workspace/auv/src/uuv_simulator/uuv_control/uuv_thruster_manager/setup.py" \
    build --build-base "/home/robond/workspace/auv/build/uuv_simulator/uuv_control/uuv_thruster_manager" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/robond/workspace/auv/install" --install-scripts="/home/robond/workspace/auv/install/bin"
