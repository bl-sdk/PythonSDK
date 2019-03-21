#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDlcContentInfo()
{
    class_< FDlcContentInfo >("FDlcContentInfo", no_init)
        .def_readwrite("ContentId", &FDlcContentInfo::ContentId)
  ;
}