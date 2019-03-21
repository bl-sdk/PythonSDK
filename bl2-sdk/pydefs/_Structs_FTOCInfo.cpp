#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTOCInfo()
{
    class_< FTOCInfo >("FTOCInfo", no_init)
        .def_readwrite("TOC", &FTOCInfo::TOC)
        .def_readwrite("RootPath", &FTOCInfo::RootPath)
        .def_readwrite("Path", &FTOCInfo::Path)
  ;
}