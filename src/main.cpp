#include <iostream>
#include <filesystem>


int main(){

  std::filesystem::path music="music";

  for(const auto& entry : std::filesystem::directory_iterator(music)){
    if(entry.is_directory()){
      std::cout << "[Playlist]" << entry.path() << '\n';
    }
    else if(entry.is_regular_file() && (entry.path().extension() == ".mp3" || 
            entry.path().extension() == ".wav" ||
            entry.path().extension() == ".flac" ||
            entry.path().extension() == ".m4a" ||
            entry.path().extension() == ".aac" ||
            entry.path().extension() == ".ogg")
          ){
      std::cout << "[Song]" << entry.path() << '\n';
    }
  }

  return 0;
}
