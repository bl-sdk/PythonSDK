#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetSkelControlSingleBoneData(py::module &m)
{
    py::class_< UBehavior_SetSkelControlSingleBoneData,  UBehaviorBase   >(m, "UBehavior_SetSkelControlSingleBoneData")
		.def_static("StaticClass", &UBehavior_SetSkelControlSingleBoneData::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SkelControlName", &UBehavior_SetSkelControlSingleBoneData::SkelControlName)
        .def_readwrite("BoneTranslation", &UBehavior_SetSkelControlSingleBoneData::BoneTranslation)
        .def_readwrite("BoneRotation", &UBehavior_SetSkelControlSingleBoneData::BoneRotation)
        .def("ApplyBehaviorToContext", &UBehavior_SetSkelControlSingleBoneData::ApplyBehaviorToContext)
          ;
}