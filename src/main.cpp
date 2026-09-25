#include <iostream>
#include <filesystem>


int main(){

  std::filesystem::path music="music";

  for(const auto& entry : std::filesystem::directory_iterator(music)){
    if(entry.is_directory()){
      std::cout << "[Playlist]" << entry.path() << '\n';
    }
    else if(entry.is_regular_file()){
      std::cout << "[Song]" << entry.path() << '\n';
    }
  }

  return 0;
}
