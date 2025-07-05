#include <iostream>
#include <string>
#include <curl/curl.h>

// Fungsi callback untuk menyimpan response ke string
size_t WriteCallback(void* contents, size_t size, size_t nmemb, void* userp) {
    ((std::string*)userp)->append((char*)contents, size * nmemb);
    return size * nmemb;
}

int main() {
    CURL* curl;
    CURLcode res;
    std::string readBuffer;

    curl = curl_easy_init();
    if (curl) {
        // Set URL API Google
        curl_easy_setopt(curl, CURLOPT_URL, "https://www.googleapis.com/books/v1/volumes?q=harry+potter");
        // Set fungsi callback penampung data
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        // Set buffer untuk menyimpan hasil response
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);

        // Eksekusi permintaan HTTP GET
        res = curl_easy_perform(curl);

        // Cek error
        if (res != CURLE_OK) {
            std::cerr << "curl_easy_perform() failed: " << curl_easy_strerror(res) << std::endl;
        } else {
            // Tampilkan response JSON
            std::cout << "Hasil response dari Google API:\n" << readBuffer << std::endl;
        }

        curl_easy_cleanup(curl);
    }
    return 0;
}
