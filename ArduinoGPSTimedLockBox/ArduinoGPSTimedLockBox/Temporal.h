#ifndef _TEMPORAL_h
#define _TEMPORAL_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

#include "Setup.h"
#include <DS1307RTC.h>
#include <Time.h>

// This is similar to the structure found in the Time.h library.
// However, that library is based around absolute times from linux epoch rather than times as a length of a duration.
// For example take 1,000,000 seconds.
// As a linux time_t time (such as in the Time.h library), that would be assumed to represent 1 millions seconds from Jan 1 1970, which is Monday, January 12, 1970 1:46:40 PM GMT.
// Represented with this structure, all it means is 11 days, 13 hours, 46 minutes, and 40 seconds from some other unknown time.
// Same concept, but using the below structure suggests we are not using 1970 epoch as our "Time From" value so should avoid confusion.
struct TimeSpanDuration
{
	uint8_t Days = 0;
	uint8_t Hours = 0;
	uint8_t Minutes = 0;
	uint8_t Seconds = 0;
};

class Temporal
{
private:
	static Setup systemConfig;
	static TimeSpanDuration ConvertToTimeSpanDuration(uint32_t duration);
	static DS1307RTC* rtc;
public:
	Temporal();
	static bool SetCurrentTime(time_t newTime);
	static TimeSpanDuration GetTimeUntilGameStart();
	static TimeSpanDuration GetTimeUntilWindowOpens();
	static TimeSpanDuration GetTimeUntilWindowClose();
	static time_t GetDateTimeInUtc();
	static bool HasWindowOpened();
	static bool IsGameStartReached();
	static bool HasWindowExpired();
};

#endif

