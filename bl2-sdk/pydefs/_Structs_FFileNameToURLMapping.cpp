#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FFileNameToURLMapping()
{
    class_< FFileNameToURLMapping >("FFileNameToURLMapping", no_init)
        .def_readwrite("Filename", &FFileNameToURLMapping::Filename)
        .def_readwrite("UrlMapping", &FFileNameToURLMapping::UrlMapping)
  ;
}