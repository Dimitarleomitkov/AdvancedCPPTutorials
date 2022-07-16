#include <iostream>

/* Let's create a Logging class.
   We can use it for debugging and so on. */

class Log {
// Public members
public:
    const int LogLevelError = 0;
    const int LogLevelWarning = 1;
    const int LogLevelInfo = 2;
// Public functionality
public:

    /*
    Implementation of the function SetLevel()
    params:
        int level
    return:
        void
    */

    void SetLevel(int level) {
        m_LogLevel = level;
    }

    /*
    Implementation of the function Error()
    params:
        const char* message
    return:
        void
    */

    void Error(const char* message) {
        if (m_LogLevel >= LogLevelError) {
            std::cout << "[ERROR]:" << message << std::endl;
        }
    }

    /*
    Implementation of the function Warn()
    params:
        const char* message
    return:
        void
    */

    void Warn(const char* message) {
        if (m_LogLevel >= LogLevelWarning) {
            std::cout << "[WARNING]:" << message << std::endl;
        }
    }

    /*
    Implementation of the function Info()
    params:
        const char* message
    return:
        void
    */

    void Info(const char* message) {
        if (m_LogLevel >= LogLevelInfo) {
            std::cout << "[INFO]:" << message << std::endl;
        }
    }
protected:
private:
    /* private variables go here. They are called members (m_).
       By default m_LogLevel is set to LogLevelInfo. Everything gets printed. */
    int m_LogLevel = LogLevelInfo;
};

int main()
{
    // Instantiate a log.
    Log log;

    // Set the level of the log messages.
    log.SetLevel(log.LogLevelWarning);
    // Log a warning.
    log.Warn("You need to drink something!");
    // Log an info. Info does not print at warning level.
    log.Info("You can drink water.");
    // Log an error.
    log.Error("There is no water in Africa!");

    // Let's print an info message.
    // Set the level to info.
    log.SetLevel(log.LogLevelInfo);
    // Log an info.
    log.Info("There is drinkable water in Europe.");

    return 0;
}
