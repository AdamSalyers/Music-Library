#include <iostream>
#include <queue>
#include <string>
#include <vector>
#include "Trie.cpp"

using namespace std;


struct songNode {

  string name;
  string artist;
  string genre;
  songNode* next;
  float priorityNum;

  int length[2];
};


class MusicLibrary
{
public:
  MusicLibrary();
  ~MusicLibrary();
  void insertSong();
  void removeSong();
  void displayPlaylist();
  void skipSong();
  songNode* search();
  void createPlaylist();
  void displayCurrentSong();
  void addToQueue();
  void removeFromQueue();
  void viewQueue();

private:
  Trie mytrie;
  vector<Playlist> myplaylists;
  songNode* currsong;
  vector<songNode*> history;
};
