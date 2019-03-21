#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APersistentTransitionLandmark()
{
    py::class_< APersistentTransitionLandmark,  ALevelLandmark   >("APersistentTransitionLandmark")
        .def_readwrite("FromMapName", &APersistentTransitionLandmark::FromMapName)
        .def_readwrite("ToMapName", &APersistentTransitionLandmark::ToMapName)
        .def_readwrite("RequiredSublevelNames", &APersistentTransitionLandmark::RequiredSublevelNames)
        .def("StaticClass", &APersistentTransitionLandmark::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}