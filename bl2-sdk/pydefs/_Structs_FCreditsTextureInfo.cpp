#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCreditsTextureInfo()
{
    class_< FCreditsTextureInfo >("FCreditsTextureInfo", no_init)
        .def_readwrite("TexturePath", &FCreditsTextureInfo::TexturePath)
  ;
}