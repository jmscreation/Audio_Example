#include <iostream>
#include <filesystem>
#include <vector>
#include "audio.h"

namespace fs = std::filesystem; // shorten the std::filesystem to fs

int main(int argc, char* argv[]) {
    srand(time(0)); // randomize rand() seed

    std::vector<SoundBuffer*> sounds; // create a sound buffer list

    int index = 0; // start searching with sound 0
    do {
        SoundBuffer* snd = new SoundBuffer; // allocate new sound

        std::string path = std::string("sounds/snd") + std::to_string(index++) + ".ogg"; // generate the path to the next sound file

        if(fs::is_regular_file(fs::path(path)) && snd->loadOGGFromFile(path)){ // check if sound exists and if it loads correctly
            sounds.push_back(snd); // push sound to sound list
            continue; // continue to search for another sound
        }
        delete snd; // free invalid sound
        break; // no more sounds to load
    } while(1); // loop until break


    if(sounds.empty()) return 1; // no sounds were loaded, exit with error code 1

    SoundBuffer* soundToPlay = sounds[rand() % sounds.size()]; // pick random sound

    soundToPlay->play(true); // play the picked sound

    while(soundToPlay->isPlaying()); // wait until sound is finished playing

    return 0;
}