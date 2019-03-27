#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APersistentTransitionLandmark(py::module &m)
{
    py::class_< APersistentTransitionLandmark,  ALevelLandmark   >(m, "APersistentTransitionLandmark")
		.def_static("StaticClass", &APersistentTransitionLandmark::StaticClass, py::return_value_policy::reference)
        .def_readwrite("FromMapName", &APersistentTransitionLandmark::FromMapName)
        .def_readwrite("ToMapName", &APersistentTransitionLandmark::ToMapName)
        .def_readwrite("RequiredSublevelNames", &APersistentTransitionLandmark::RequiredSublevelNames)
          ;
}