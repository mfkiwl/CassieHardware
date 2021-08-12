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
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/xiaobin/cassie_ws/src/amber_developer_stack/gdb_utilities"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/xiaobin/cassie_ws/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/xiaobin/cassie_ws/install/lib/python2.7/dist-packages:/home/xiaobin/cassie_ws/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/xiaobin/cassie_ws/build" \
    "/usr/bin/python2" \
    "/home/xiaobin/cassie_ws/src/amber_developer_stack/gdb_utilities/setup.py" \
     \
    build --build-base "/home/xiaobin/cassie_ws/build/amber_developer_stack/gdb_utilities" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/xiaobin/cassie_ws/install" --install-scripts="/home/xiaobin/cassie_ws/install/bin"
