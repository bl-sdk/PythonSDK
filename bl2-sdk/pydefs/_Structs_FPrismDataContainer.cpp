#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPrismDataContainer()
{
    class_< FPrismDataContainer >("FPrismDataContainer", no_init)
        .def_readwrite("RotateBoneTranslation", &FPrismDataContainer::RotateBoneTranslation)
        .def_readwrite("RotateBone", &FPrismDataContainer::RotateBone)
        .def_readwrite("RotateRefBone", &FPrismDataContainer::RotateRefBone)
        .def_readwrite("AnimDeltaList", &FPrismDataContainer::AnimDeltaList)
        .def_readwrite("AnimDeltaRefList", &FPrismDataContainer::AnimDeltaRefList)
        .def_readwrite("SwapList", &FPrismDataContainer::SwapList)
        .def_readwrite("RotateRootMotion", &FPrismDataContainer::RotateRootMotion)
  ;
}