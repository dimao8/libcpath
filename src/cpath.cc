#include <cpath.h>

/* ****************************** CPath::CPath ***************************** */

CPath::CPath ()
{
#ifdef _WIN32
  m_drive = 'C';
#endif // WIN32
}

/* *************************** CPath::string_path ************************** */

std::string
CPath::string_path ()
{
  std::string str;
  auto it = m_path_list.begin ();

#ifdef _WIN32
  if (it == m_path_list.end ())
    return std::string ();
  else
    {
      str += *it;
      str += ":\\" it++;
    }
#else
  if (it == m_path_list.end ())
    {
      str += "/";
      return str;
    }
#endif // _WIN32

#ifndef _WIN32
  str += "/";
#endif // _WIN32

  while (it != m_path_list.end ())
    {
#ifdef _WIN32
      str += "\\";
#else
      str += "/";
#endif // _WIN32
    }
}