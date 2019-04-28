#ifndef TRIE_HPP
#define TRIE_HPP

#include <iostream>
#include <string>

using namespace std;

struct songNode
{
    string name;
    string artist;
    string genre;
    int length[2];
    songNode* next;
    float prioritynum;
    songNode()
    {
      length[0] = 0;
      length[1] = 0;
      next = NULL;
      prioritynum = 0;
    }
};

struct node
{
    char name;
    node *children[26];
    node* parent;
    songNode* head;
    bool isempty;
    node()
    {
      parent = NULL;
      head = NULL;
      isempty = true;
      for (int i = 0; i < 26; i++)
      {
        children[i] = NULL;
      }
    }
};

class Trie
{
    public:
        Trie();
        ~Trie();
        void addSong(songNode song);
        songNode* findSong(string name, string star);
        char getChar(int num);
        void printTrie();
        node* gethead();
    private:
        node* head;
};

#endif