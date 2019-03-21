#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLandscapeAddCollision()
{
    class_< FLandscapeAddCollision >("FLandscapeAddCollision", no_init)
  ;
}