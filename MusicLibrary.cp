#include <iostream>
#include "MusicLibrary.hh"

using namespace std;

//linked list structure of songNode pointers with add, remove, display,
//add to queue and delete from queue options
MusicLibrary::MusicLibrary()
{
  length[0] = 0;
  length[1] = 0;
  next = NULL;
  priorityNum = 0;
}

MusicLibrary::~MusicLibrary()
{
  //deletes entire Library

  songNode *curr = head;
  songNode *next;

  while (curr != NULL)
  {
    next = curr;
    curr = curr->next;
    delete next;
  }
  if (curr == NULL)
  {
    cout << "Library deleted" << endl;
    head = NULL;
  }
}

void MusicLibrary::insertSong(string name, string artist, string genre, float priorityNum)
{
  songNode *newSong = new songNode;
  newSong->name = name;
  newSong->artist = artist;
  newSong->genre = genre;
  newSong->priorityNum = priorityNum;

  mytrie.addSong(newSong);
}

// void MusicLibrary::removeSong(string songName)
// {
//   songNode* curr = head;
//
//   if (head->next == NULL)
  // {
  //   head = NULL;
  //   return;
  // }
  //
  // if (head->name == songName)
  // {
  //   head = curr->next;
  //   return;
  // }
  //
  // while (curr->next != NULL)
  // {
  //   if (curr->next->name == songName)
  //   {
  //     curr->next = curr->next->next;
  //     return;
  //   }
  //   curr = curr->next;
  // }

  // cout << "Song not in library" << endl;
//}

void MusicLibrary::displayPlaylist()
{

}

songNode* MusicLibrary::search(string songName, string artist)
{
  songNode *returnNode = mytrie.findSong(songName, artist);
  return returnNode;
}

void MusicLibrary::skipSong()
{

}

void MusicLibrary::displayCurrentSong()
{
  songNode *curr = head;

  if (head == NULL)
  {
    cout << "No song being played" << endl;
    return;
  }

}

void MusicLibrary::createPlaylist()
{

}
