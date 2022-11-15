#include <string>
#include <vector>

template <typename T> std::vector<T> read_file(std::string file_name);

#include <chrono>
namespace chrono = std::chrono;

class Timer {
private:
  chrono::time_point<chrono::system_clock> start;
  chrono::time_point<chrono::system_clock> end;

public:
  void start_timer() { this->start = chrono::system_clock::now(); }
  void stop_timer() { this->end = chrono::system_clock::now(); }

  auto time_elapsed() {
    return chrono::duration_cast<chrono::milliseconds>(this->end - this->start)
        .count();
  }
};