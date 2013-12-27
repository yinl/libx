#define CALCULATE_TIME_INIT()              \
                struct timeval tpstart, tpend; \
            long timeuse;

#define CALCULATE_TIME_START()  { gettimeofday(&tpstart,NULL); }
#define CALCULATE_TIME_RESTART() CALCULATE_TIME_START()
#define CALCULATE_TIME(modName){         \
                  gettimeofday(&tpend,NULL);      \
                timeuse = 1000000*(tpend.tv_sec-tpstart.tv_sec)+(tpend.tv_usec-tpstart.tv_usec); \
            TRACE(Log_r::Info,"used time: %ld microseconds for %s",timeuse , modName); \
                gettimeofday(&tpstart,NULL);    \
              }

