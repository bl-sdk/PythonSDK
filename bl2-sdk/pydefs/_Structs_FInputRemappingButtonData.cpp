#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInputRemappingButtonData()
{
    class_< FInputRemappingButtonData >("FInputRemappingButtonData", no_init)
        .def_readwrite("DefaultKeyName", &FInputRemappingButtonData::DefaultKeyName)
        .def_readwrite("RemappedKeyName", &FInputRemappingButtonData::RemappedKeyName)
        .def_readwrite("RemappedPressActions", &FInputRemappingButtonData::RemappedPressActions)
        .def_readwrite("RemappedTapActions", &FInputRemappingButtonData::RemappedTapActions)
        .def_readwrite("RemappedHoldActions", &FInputRemappingButtonData::RemappedHoldActions)
        .def_readwrite("Caption", &FInputRemappingButtonData::Caption)
  ;
}