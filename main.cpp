#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <boost>

using namespace std;

struct Journal
{
  string title;
  vector<string> entries;

  Journal(const string& title) : title(title) {}

  void add_entry(const string& entry)
  {
    static int count = 1;
    entries.push_back(lexical_cast<string>(count++) + ": " entry);
  }

};

struct PersistentManager
{
  static void save (const Journal& j, const std::string& filename)
  {
    std::ofstream ofs(filename);
    for (auto& e : j.entries)
      ofs << e << std::endl;
  };
};

int main()
{
  Journal journal{"Dear Diary"};
  journal.add_entry()





}