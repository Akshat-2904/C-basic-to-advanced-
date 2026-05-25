#pragma once
#include<iostream>
#include"print"



class Log
{
public://variables
	
	enum class LogLevel :std::uint8_t {
	 LogLevelWarning = 3,
	 LogLevelError = 2,
	 LogLevelText = 1,
	 LogLevelInfo = 0,


	};
	
protected://variables
	LogLevel M_LogLevel;
public:
	
	void SetLevel(LogLevel LogLevel)
	{

		M_LogLevel = LogLevel;
	}

	void Warning(const char* msg)
	{
		if (M_LogLevel == LogLevel::LogLevelWarning)
		{
			std::printf("[WARNING]:%s",msg);;
		}
	}

	void Error(const char* msg)
	{
		if (M_LogLevel == LogLevel::LogLevelError)
		{
			std::printf("[ERROR]:%s", msg);
		}
	}

	void Text(const char* msg)
	{
		if (M_LogLevel == LogLevel::LogLevelText)
		{
			std::printf("[TEXT]:%s", msg);
		}
	}

	void Info(const char* msg)
	{
		if (M_LogLevel == LogLevel::LogLevelInfo)
		{
			std::printf("[INFO]:%s", msg);
		}
	}
};