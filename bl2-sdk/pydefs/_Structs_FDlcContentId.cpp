#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDlcContentId()
{
    class_< FDlcContentId >("FDlcContentId", no_init)
        .def_readwrite("PackageId", &FDlcContentId::PackageId)
        .def_readwrite("ContentId", &FDlcContentId::ContentId)
  ;
}