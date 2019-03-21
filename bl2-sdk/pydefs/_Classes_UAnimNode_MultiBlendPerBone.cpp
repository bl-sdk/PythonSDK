#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNode_MultiBlendPerBone(py::object m)
{
    py::class_< UAnimNode_MultiBlendPerBone,  UAnimNodeBlendBase   >(m, "UAnimNode_MultiBlendPerBone")
        .def_readwrite("PawnOwner", &UAnimNode_MultiBlendPerBone::PawnOwner)
        .def_readwrite("MaskList", &UAnimNode_MultiBlendPerBone::MaskList)
        .def_readwrite("RotationBlendType", &UAnimNode_MultiBlendPerBone::RotationBlendType)
        .def("StaticClass", &UAnimNode_MultiBlendPerBone::StaticClass, py::return_value_policy::reference)
        .def("SetMaskWeight", &UAnimNode_MultiBlendPerBone::SetMaskWeight)
          ;
}