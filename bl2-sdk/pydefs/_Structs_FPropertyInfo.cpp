#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPropertyInfo()
{
    class_< FPropertyInfo >("FPropertyInfo", no_init)
        .def_readwrite("PropertyName", &FPropertyInfo::PropertyName)
        .def_readwrite("PropertyValue", &FPropertyInfo::PropertyValue)
  ;
}