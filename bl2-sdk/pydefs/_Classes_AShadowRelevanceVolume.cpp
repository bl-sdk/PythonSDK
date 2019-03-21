#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AShadowRelevanceVolume()
{
    py::class_< AShadowRelevanceVolume,  AVolume   >("AShadowRelevanceVolume")
        .def_readwrite("ShadowRelevanceList", &AShadowRelevanceVolume::ShadowRelevanceList)
        .def("StaticClass", &AShadowRelevanceVolume::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}