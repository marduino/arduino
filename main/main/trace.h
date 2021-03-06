#ifndef trace_h
#define trace_h

#include "Arduino.h"

#define TRACE_DEBUG_LEVEL_INFO   0
#define TRACE_DEBUG_LEVEL_WARN   1
#define TRACE_DEBUG_LEVEL_ERR    2
#define TRACE_DEBUG_LEVEL_FATAL  3

class Trace
{
  public:
    static void traceInfo(String str);
    static void traceWarn(String str);
    static void traceError(String str);
    static void traceFatal(String str);
    static void trace(String str);
  private:
    static const int traceDebugLevel;
 };


#endif

