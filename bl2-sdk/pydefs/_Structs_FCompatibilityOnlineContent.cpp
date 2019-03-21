#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCompatibilityOnlineContent()
{
    class_< FCompatibilityOnlineContent >("FCompatibilityOnlineContent", no_init)
        .def_readwrite("VersionNumber", &FCompatibilityOnlineContent::VersionNumber)
        .def_readwrite("Container", &FCompatibilityOnlineContent::Container)
        .def_readwrite("Content", &FCompatibilityOnlineContent::Content)
  ;
}