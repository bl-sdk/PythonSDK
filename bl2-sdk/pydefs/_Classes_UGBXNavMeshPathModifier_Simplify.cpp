#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGBXNavMeshPathModifier_Simplify(py::module &m)
{
    py::class_< UGBXNavMeshPathModifier_Simplify,  UGBXNavMeshPathModifier   >(m, "UGBXNavMeshPathModifier_Simplify")
        .def_readwrite("CornerCutInterval", &UGBXNavMeshPathModifier_Simplify::CornerCutInterval)
          ;
}