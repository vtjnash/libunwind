/* This can be added as a shared library with LD_PRELOAD to block setrlimit
 * calls. Those tests can be problematic for qemu-type emulators. */

#include <errno.h>

int setrlimit(int resource, const void *rlp) {
    errno = ENOSYS;
    return -1;
}
