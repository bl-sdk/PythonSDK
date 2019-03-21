#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMorphNodeWeightByBoneAngle()
{
    class_< UMorphNodeWeightByBoneAngle, bases< UMorphNodeWeightBase >  , boost::noncopyable>("UMorphNodeWeightByBoneAngle", no_init)
        .def_readwrite("Angle", &UMorphNodeWeightByBoneAngle::Angle)
        .def_readwrite("NodeWeight", &UMorphNodeWeightByBoneAngle::NodeWeight)
        .def_readwrite("BaseBoneName", &UMorphNodeWeightByBoneAngle::BaseBoneName)
        .def_readwrite("BaseBoneAxis", &UMorphNodeWeightByBoneAngle::BaseBoneAxis)
        .def_readwrite("AngleBoneAxis", &UMorphNodeWeightByBoneAngle::AngleBoneAxis)
        .def_readwrite("AngleBoneName", &UMorphNodeWeightByBoneAngle::AngleBoneName)
        .def_readwrite("MaterialSlotId", &UMorphNodeWeightByBoneAngle::MaterialSlotId)
        .def_readwrite("ScalarParameterName", &UMorphNodeWeightByBoneAngle::ScalarParameterName)
        .def_readwrite("MaterialInstanceConstant", &UMorphNodeWeightByBoneAngle::MaterialInstanceConstant)
        .def_readwrite("WeightArray", &UMorphNodeWeightByBoneAngle::WeightArray)
        .def("StaticClass", &UMorphNodeWeightByBoneAngle::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}