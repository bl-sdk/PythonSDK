#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTextureGroupContainer()
{
    class_< FTextureGroupContainer >("FTextureGroupContainer", no_init)
  ;
}