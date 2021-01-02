#pragma once

#include "PhoneAPI.h"
#include "concurrency/OSThread.h"
#include <Arduino.h>
#include <functional>

void initWebServer();
void createSSLCert();

void handleNotFound();

void handleWebResponse();

void handleJSONChatHistory();

void notifyWebUI();

void handleHotspot();

void handleStyleCSS();
void handleRoot();
void handleScriptsScriptJS();
void handleJSONChatHistoryDummy();

void replaceAll(std::string &str, const std::string &from, const std::string &to);


// Interface to the PhoneAPI to access the protobufs with messages
class HttpAPI : public PhoneAPI
{

  public:
    // Nothing here yet

  private:
    // Nothing here yet

  protected:
    // Nothing here yet
};
