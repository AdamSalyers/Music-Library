# Music-Library
This is a Trie implemented data structure for a music library similiar to an extremely primitive Spotify or Apple Music

# Features
-Auto updating search. The program uses a the Trie data structure to implement an autoupdating search. It is a proof of concept showing the usefullness of a trie for this specific task.
-The library can create queue's, playlists, add remove songs. General basic overview
-Written in C++, the Trie is completely implemented from scratch. Below is a sample of code outlining the definition of individual nodes.
`struct node
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
};`

# Seeing the program in action
