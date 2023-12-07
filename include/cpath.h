#ifndef CPATH_H
#define CPATH_H

#include <string>
#include <list>

class CPath
{

private:
#ifdef _WIN32
  char m_drive;
#endif // _WIN32
  std::list<std::string> m_path_list;

public:
  ///
  /// \brief Init with root (C:/ on windows)
  ///
  CPath ();

  ///
  /// \brief Return string representation of the path
  ///
  std::string string_path ();

  ///
  /// \brief Canonicalize path
  ///
  void canonicalize ();

};

#endif // CPATH_H
