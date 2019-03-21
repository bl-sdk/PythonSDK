#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMorphNodeWeightByBoneRotation(py::object m)
{
    py::class_< UMorphNodeWeightByBoneRotation,  UMorphNodeWeightBase   >(m, "UMorphNodeWeightByBoneRotation")
        .def_readwrite("Angle", &UMorphNodeWeightByBoneRotation::Angle)
        .def_readwrite("NodeWeight", &UMorphNodeWeightByBoneRotation::NodeWeight)
        .def_readwrite("BoneName", &UMorphNodeWeightByBoneRotation::BoneName)
        .def_readwrite("BoneAxis", &UMorphNodeWeightByBoneRotation::BoneAxis)
        .def_readwrite("WeightArray", &UMorphNodeWeightByBoneRotation::WeightArray)
        .def_readwrite("MaterialSlotId", &UMorphNodeWeightByBoneRotation::MaterialSlotId)
        .def_readwrite("ScalarParameterName", &UMorphNodeWeightByBoneRotation::ScalarParameterName)
        .def_readwrite("MaterialInstanceConstant", &UMorphNodeWeightByBoneRotation::MaterialInstanceConstant)
        .def("StaticClass", &UMorphNodeWeightByBoneRotation::StaticClass, py::return_value_policy::reference)
          ;
}