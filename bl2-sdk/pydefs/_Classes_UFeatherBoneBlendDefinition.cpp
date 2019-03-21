#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFeatherBoneBlendDefinition()
{
    py::class_< UFeatherBoneBlendDefinition,  UGBXDefinition   >("UFeatherBoneBlendDefinition")
        .def_readwrite("BoneBlends", &UFeatherBoneBlendDefinition::BoneBlends)
        .def("StaticClass", &UFeatherBoneBlendDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}