#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGBXNavMeshPathModifier()
{
    py::class_< UGBXNavMeshPathModifier,  UObject   >("UGBXNavMeshPathModifier")
        .def("StaticClass", &UGBXNavMeshPathModifier::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}