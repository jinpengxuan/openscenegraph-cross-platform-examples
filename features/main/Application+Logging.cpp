FEATURE main.h/Include
#include "log.h"

FEATURE main.h/Setup
this->setupLogging(name);

FEATURE main.h/TearDown
this->tearLoggingDown();

FEATURE main.h/Impl
private:
    log::Logger *logger;
    void setupLogging(const std::string &appName)
    {
        // Create custom logger.
        this->logger = new log::Logger(appName);
        // Provide the logger to OpenSceneGraph.
        osg::setNotifyHandler(this->logger);
        // Only accept notifications of Info level or higher
        // like warnings and errors.
        //osg::setNotifyLevel(osg::INFO);
        osg::setNotifyLevel(osg::WARN);
    }
    void tearLoggingDown()
    {
        // Remove the logger from OpenSceneGraph.
        // This also destroys the logger: no need to deallocate it manually.
        osg::setNotifyHandler(0);
    }
