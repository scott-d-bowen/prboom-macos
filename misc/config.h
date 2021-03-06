/**/
/* Define to the full name of this package. */
#define PACKAGE_NAME "PrBoom-Plus"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "prboom-plus"

/* Define to the version of this package. */
#define PACKAGE_VERSION "2.5.1.5"

#ifdef DEBUG

/* Define to enable internal range checking */
#define RANGECHECK 1

/* Define this to see real-time memory allocation
 * statistics, and enable extra debugging features
 */
#undef INSTRUMENTED

/* Uncomment this to exhaustively run memory checks
 * while the game is running (this is EXTREMELY slow).
 * Only useful if INSTRUMENTED is also defined.
 */
#undef CHECKHEAP

/* Uncomment this to cause heap dumps to be generated.
 * Only useful if INSTRUMENTED is also defined.
 */
#undef HEAPDUMP

/* Uncomment this to perform id checks on zone blocks,
 * to detect corrupted and illegally freed blocks
 */
#define ZONEIDCHECK 1

/* CPhipps - some debugging macros for the new wad lump handling code */
/* Defining this causes quick checks which only impose an overhead if a
 *  posible error is detected. */
#define SIMPLECHECKS 1

/* Defining this causes time stamps to be created each time a lump is locked, and
 *  lumps locked for long periods of time are reported */
#define TIMEDIAG 1

#endif // DEBUG

#define DOGS 1
#define MONITOR_VISIBILITY 1
/*#define DISABLE_LUMP_CACHING*/

/**/
/*#define HAVE_MIXER 1*/
#define HAVE_NET 1
#define USE_SDL_NET 1

/* Define if you have the SDL image library -lSDL_image */
#define HAVE_LIBSDL2_IMAGE

/* Define if you want to use FBO for some tricks in OpenGL */
#define USE_FBO_TECHNIQUE 1

/* Define if you want to use hardware shaders in OpenGL */
#define USE_SHADERS 1

/**/
#define HIGHRES 1
#define GL_DOOM 1
#define USE_GLU_TESS 1
#define USE_GLU_IMAGESCALE 1
#define USE_GLU_MIPMAP 1
#define DISABLE_DOUBLEBUFFER 1

/**/
#define STDC_HEADERS 1

#define stricmp strcasecmp
#define strnicmp strncasecmp

#define HAVE_INET_ATON 1
#define HAVE_INET_NTOP 1
#define HAVE_INET_PTON 1
#define HAVE_SETSOCKOPT 1

#define HAVE_SNPRINTF 1
#define HAVE_VSNPRINTF 1

#define HAVE_MKSTEMPS 1

#define HAVE_IPv6 1

#define HAVE_UNISTD_H 1
#define HAVE_SYS_WAIT_H 1
#define HAVE_GETOPT 1
/* causes a duplicate define warning
#define HAVE_NETINET_IN_H
*/
#define HAVE_DECL_SYS_SIGLIST 1

/**/
#ifdef __BIG_ENDIAN__
#define WORDS_BIGENDIAN 1
#endif

#ifdef __i386__
#define I386_ASM 1
#endif

#define PACKEDATTR __attribute__((packed))

#define MACOSX 1
#define HAVE_LIBKERN_OSBYTEORDER_H 1
#define SCREENSHOT_DIR I_DoomExeDir()
#define HEAPDUMP_DIR I_DoomExeDir()

#ifndef __BYTEBOOL__
#define __BYTEBOOL__
typedef int dboolean;
enum {false, true};
typedef unsigned char byte;
#endif

/* Define to 1 if you have the `dumb' library (-ldumb). */
#define HAVE_LIBDUMB 1

/* Define to 1 if you have the `fluidsynth' library (-lfluidsynth). */
#define HAVE_LIBFLUIDSYNTH 1

/* Define to 1 if you have the `mad' library (-lmad). */
#define HAVE_LIBMAD 1

/* Define to 1 if you have the `pcreposix' library (-lpcreposix). */
#define HAVE_LIBPCREPOSIX 1

/* Define to 1 if you have the `png' library (-lpng). */
#define HAVE_LIBPNG 1

/* Define to 1 if you have the `portmidi' library (-lportmidi). */
#define HAVE_LIBPORTMIDI 1

/* Define to 1 if you have the `SDL_mixer' library (-lSDL_mixer). */
#define HAVE_LIBSDL2_MIXER 1

/* Define to 1 if you have the `vorbisfile' library (-lvorbisfile). */
#define HAVE_LIBVORBISFILE 1
