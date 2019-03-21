#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTitleFileMapping()
{
    class_< FTitleFileMapping >("FTitleFileMapping", no_init)
        .def_readwrite("Filename", &FTitleFileMapping::Filename)
        .def_readwrite("UGCHandle", &FTitleFileMapping::UGCHandle)
  ;
}