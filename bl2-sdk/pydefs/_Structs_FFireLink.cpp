#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FFireLink()
{
    py::class_< FFireLink >("FFireLink")
        .def_readwrite("Interactions", &FFireLink::Interactions)
        .def_readwrite("PackedProperties_CoverPairRefAndDynamicInfo", &FFireLink::PackedProperties_CoverPairRefAndDynamicInfo)
  ;
}