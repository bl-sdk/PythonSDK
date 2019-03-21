#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FStaticMeshLODInfo()
{
    class_< FStaticMeshLODInfo >("FStaticMeshLODInfo", no_init)
        .def_readwrite("Elements", &FStaticMeshLODInfo::Elements)
  ;
}