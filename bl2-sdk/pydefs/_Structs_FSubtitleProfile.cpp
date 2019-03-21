#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSubtitleProfile()
{
    class_< FSubtitleProfile >("FSubtitleProfile", no_init)
        .def_readwrite("MinX", &FSubtitleProfile::MinX)
        .def_readwrite("MaxX", &FSubtitleProfile::MaxX)
        .def_readwrite("MinY", &FSubtitleProfile::MinY)
        .def_readwrite("MaxY", &FSubtitleProfile::MaxY)
  ;
}