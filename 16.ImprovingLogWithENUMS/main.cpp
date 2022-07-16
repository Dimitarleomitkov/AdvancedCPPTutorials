#include <iostream>

/* Let's create a Logging class.
   We can use it for debugging and so on. */

class Log {
// Public members
public:
    // Adding a Level enum.
    enum Level : unsigned char {
        ERROR = 0,
        WARNING = 1,
        INFO = 2
    };
// Public functionality
public:

    /*
    Implementation of the function SetLevel()
    params:
        int level
    return:
        void
    */

    void SetLevel(Level level) {
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
        if (m_LogLevel >= ERROR) {
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
        if (m_LogLevel >= WARNING) {
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
        if (m_LogLevel >= INFO) {
            std::cout << "[INFO]:" << message << std::endl;
        }
    }
protected:
private:
    /* private variables go here. They are called members (m_).
       By default m_LogLevel is set to LogLevelInfo. Everything gets printed.
       Restricting m_LogLevel to the enum. */
    Level m_LogLevel = INFO;
};

int main()
{
    // Instantiate a log.
    Log log;

    // Set the level of the log messages.
    log.SetLevel(Log::WARNING);
    // Log a warning.
    log.Warn("You need to drink something!");
    // Log an info. Info does not print at warning level.
    log.Info("You can drink water.");
    // Log an error.
    log.Error("There is no water in Africa!");

    // Let's print an info message.
    // Set the level to info.
    log.SetLevel(Log::INFO);
    // Log an info.
    log.Info("There is drinkable water in Europe.");

    return 0;
}
