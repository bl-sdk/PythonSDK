#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPrismDataContainer(py::module &m)
{
    py::class_< FPrismDataContainer >(m, "FPrismDataContainer")
        .def_readwrite("RotateBoneTranslation", &FPrismDataContainer::RotateBoneTranslation)
        .def_readwrite("RotateBone", &FPrismDataContainer::RotateBone)
        .def_readwrite("RotateRefBone", &FPrismDataContainer::RotateRefBone)
        .def_readwrite("AnimDeltaList", &FPrismDataContainer::AnimDeltaList)
        .def_readwrite("AnimDeltaRefList", &FPrismDataContainer::AnimDeltaRefList)
        .def_readwrite("SwapList", &FPrismDataContainer::SwapList)
        .def_readwrite("RotateRootMotion", &FPrismDataContainer::RotateRootMotion)
  ;
}