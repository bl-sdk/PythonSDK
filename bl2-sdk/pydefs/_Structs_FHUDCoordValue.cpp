#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FHUDCoordValue()
{
    class_< FHUDCoordValue >("FHUDCoordValue", no_init)
        .def_readwrite("Type", &FHUDCoordValue::Type)
        .def_readwrite("Value", &FHUDCoordValue::Value)
        .def_readwrite("CurrentValue", &FHUDCoordValue::CurrentValue)
  ;
}