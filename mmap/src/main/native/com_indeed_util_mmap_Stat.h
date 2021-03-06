/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_indeed_util_mmap_Stat */

#ifndef _Included_com_indeed_util_mmap_Stat
#define _Included_com_indeed_util_mmap_Stat
#ifdef __cplusplus
extern "C" {
#endif
#undef com_indeed_util_mmap_Stat_S_IFMT
#define com_indeed_util_mmap_Stat_S_IFMT 61440L
#undef com_indeed_util_mmap_Stat_S_IFSOCK
#define com_indeed_util_mmap_Stat_S_IFSOCK 49152L
#undef com_indeed_util_mmap_Stat_S_IFLNK
#define com_indeed_util_mmap_Stat_S_IFLNK 40960L
#undef com_indeed_util_mmap_Stat_S_IFREG
#define com_indeed_util_mmap_Stat_S_IFREG 32768L
#undef com_indeed_util_mmap_Stat_S_IFBLK
#define com_indeed_util_mmap_Stat_S_IFBLK 24576L
#undef com_indeed_util_mmap_Stat_S_IFDIR
#define com_indeed_util_mmap_Stat_S_IFDIR 16384L
#undef com_indeed_util_mmap_Stat_S_IFCHR
#define com_indeed_util_mmap_Stat_S_IFCHR 8192L
#undef com_indeed_util_mmap_Stat_S_IFIFO
#define com_indeed_util_mmap_Stat_S_IFIFO 4096L
#undef com_indeed_util_mmap_Stat_S_ISUID
#define com_indeed_util_mmap_Stat_S_ISUID 2048L
#undef com_indeed_util_mmap_Stat_S_ISGID
#define com_indeed_util_mmap_Stat_S_ISGID 1024L
#undef com_indeed_util_mmap_Stat_S_ISVTX
#define com_indeed_util_mmap_Stat_S_ISVTX 512L
#undef com_indeed_util_mmap_Stat_S_IRWXU
#define com_indeed_util_mmap_Stat_S_IRWXU 448L
#undef com_indeed_util_mmap_Stat_S_IRUSR
#define com_indeed_util_mmap_Stat_S_IRUSR 256L
#undef com_indeed_util_mmap_Stat_S_IWUSR
#define com_indeed_util_mmap_Stat_S_IWUSR 128L
#undef com_indeed_util_mmap_Stat_S_IXUSR
#define com_indeed_util_mmap_Stat_S_IXUSR 64L
#undef com_indeed_util_mmap_Stat_S_IRWXG
#define com_indeed_util_mmap_Stat_S_IRWXG 56L
#undef com_indeed_util_mmap_Stat_S_IRGRP
#define com_indeed_util_mmap_Stat_S_IRGRP 32L
#undef com_indeed_util_mmap_Stat_S_IWGRP
#define com_indeed_util_mmap_Stat_S_IWGRP 16L
#undef com_indeed_util_mmap_Stat_S_IXGRP
#define com_indeed_util_mmap_Stat_S_IXGRP 8L
#undef com_indeed_util_mmap_Stat_S_IRWXO
#define com_indeed_util_mmap_Stat_S_IRWXO 7L
#undef com_indeed_util_mmap_Stat_S_IROTH
#define com_indeed_util_mmap_Stat_S_IROTH 4L
#undef com_indeed_util_mmap_Stat_S_IWOTH
#define com_indeed_util_mmap_Stat_S_IWOTH 2L
#undef com_indeed_util_mmap_Stat_S_IXOTH
#define com_indeed_util_mmap_Stat_S_IXOTH 1L
/*
 * Class:     com_indeed_util_mmap_Stat
 * Method:    stat
 * Signature: (Ljava/lang/String;J)I
 */
JNIEXPORT jint JNICALL Java_com_indeed_util_mmap_Stat_stat
  (JNIEnv *, jclass, jstring, jlong);

/*
 * Class:     com_indeed_util_mmap_Stat
 * Method:    lstat
 * Signature: (Ljava/lang/String;J)I
 */
JNIEXPORT jint JNICALL Java_com_indeed_util_mmap_Stat_lstat
  (JNIEnv *, jclass, jstring, jlong);

/*
 * Class:     com_indeed_util_mmap_Stat
 * Method:    fstat
 * Signature: (IJ)I
 */
JNIEXPORT jint JNICALL Java_com_indeed_util_mmap_Stat_fstat
  (JNIEnv *, jclass, jint, jlong);

#ifdef __cplusplus
}
#endif
#endif
