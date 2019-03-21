#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInputRemappingAxisData()
{
    class_< FInputRemappingAxisData >("FInputRemappingAxisData", no_init)
        .def_readwrite("DefaultAxisName", &FInputRemappingAxisData::DefaultAxisName)
        .def_readwrite("RemappedAxisName", &FInputRemappingAxisData::RemappedAxisName)
        .def_readwrite("RemappedAxisParameter", &FInputRemappingAxisData::RemappedAxisParameter)
        .def_readwrite("Caption", &FInputRemappingAxisData::Caption)
  ;
}