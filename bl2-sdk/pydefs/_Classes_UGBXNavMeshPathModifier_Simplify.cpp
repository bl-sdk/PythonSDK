#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGBXNavMeshPathModifier_Simplify()
{
    py::class_< UGBXNavMeshPathModifier_Simplify,  UGBXNavMeshPathModifier   >("UGBXNavMeshPathModifier_Simplify")
        .def_readwrite("CornerCutInterval", &UGBXNavMeshPathModifier_Simplify::CornerCutInterval)
        .def("StaticClass", &UGBXNavMeshPathModifier_Simplify::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}