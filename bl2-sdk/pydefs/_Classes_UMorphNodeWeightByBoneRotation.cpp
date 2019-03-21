#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMorphNodeWeightByBoneRotation()
{
    class_< UMorphNodeWeightByBoneRotation, bases< UMorphNodeWeightBase >  , boost::noncopyable>("UMorphNodeWeightByBoneRotation", no_init)
        .def_readwrite("Angle", &UMorphNodeWeightByBoneRotation::Angle)
        .def_readwrite("NodeWeight", &UMorphNodeWeightByBoneRotation::NodeWeight)
        .def_readwrite("BoneName", &UMorphNodeWeightByBoneRotation::BoneName)
        .def_readwrite("BoneAxis", &UMorphNodeWeightByBoneRotation::BoneAxis)
        .def_readwrite("WeightArray", &UMorphNodeWeightByBoneRotation::WeightArray)
        .def_readwrite("MaterialSlotId", &UMorphNodeWeightByBoneRotation::MaterialSlotId)
        .def_readwrite("ScalarParameterName", &UMorphNodeWeightByBoneRotation::ScalarParameterName)
        .def_readwrite("MaterialInstanceConstant", &UMorphNodeWeightByBoneRotation::MaterialInstanceConstant)
        .def("StaticClass", &UMorphNodeWeightByBoneRotation::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}