///////////////////////////////////////////////////////////////////////////////
//
// Class for representing corresponding pixels from 2 views
//
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include <ostream>

class GPixel {
public:
  bool operator <(const GPixel &) const;

  int	 id;	// first camera's ID
  double x;	// (x,y) of pixel in first view
  double y;
};


///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
inline bool GPixel::operator <(const GPixel &o) const {
  if(id < o.id) return(true);
  if(id > o.id) return(false);
  if(x < o.x) return(true);
  if(x > o.x) return(false);
  if(y < o.y) return(true);
  return(false);
}

///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
inline std::ostream &operator <<(std::ostream &out, const GPixel &c) {
  out << "(" << c.id << " " 
      << c.x << " "
      << c.y << ")";
  return(out);
}



