#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AdjustCameraAnimByEyeHeight()
{
    py::class_< UBehavior_AdjustCameraAnimByEyeHeight,  UBehaviorBase   >("UBehavior_AdjustCameraAnimByEyeHeight")
        .def_readwrite("BaseEyeHeight", &UBehavior_AdjustCameraAnimByEyeHeight::BaseEyeHeight)
        .def("StaticClass", &UBehavior_AdjustCameraAnimByEyeHeight::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_AdjustCameraAnimByEyeHeight::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}