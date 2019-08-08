#include "usecurl.h"

#include <curl/curl.h>


void curl_get(const std::string& _url) {
  CURL* curl = curl_easy_init();
  if (curl) {
    curl_easy_setopt(curl, CURLOPT_URL, _url.c_str());
    curl_easy_perform(curl);
    curl_easy_cleanup(curl);
    curl = NULL;
  } else {
    printf("ERROR during curl_easy_init()\n");
  }
}
