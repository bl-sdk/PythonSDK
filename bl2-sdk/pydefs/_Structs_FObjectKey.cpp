#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FObjectKey()
{
    class_< FObjectKey >("FObjectKey", no_init)
        .def_readwrite("ObjectName", &FObjectKey::ObjectName)
        .def_readwrite("AdditionalKey", &FObjectKey::AdditionalKey)
  ;
}