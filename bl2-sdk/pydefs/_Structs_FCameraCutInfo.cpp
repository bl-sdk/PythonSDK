#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCameraCutInfo()
{
    class_< FCameraCutInfo >("FCameraCutInfo", no_init)
        .def_readwrite("Location", &FCameraCutInfo::Location)
        .def_readwrite("TimeStamp", &FCameraCutInfo::TimeStamp)
  ;
}