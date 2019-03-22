#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFeatherBoneBlendDefinition(py::module &m)
{
    py::class_< UFeatherBoneBlendDefinition,  UGBXDefinition   >(m, "UFeatherBoneBlendDefinition")
        .def_readwrite("BoneBlends", &UFeatherBoneBlendDefinition::BoneBlends)
          ;
}