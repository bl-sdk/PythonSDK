#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AdjustCameraAnimByEyeHeight(py::module &m)
{
    py::class_< UBehavior_AdjustCameraAnimByEyeHeight,  UBehaviorBase   >(m, "UBehavior_AdjustCameraAnimByEyeHeight")
		.def_static("StaticClass", &UBehavior_AdjustCameraAnimByEyeHeight::StaticClass, py::return_value_policy::reference)
        .def_readwrite("BaseEyeHeight", &UBehavior_AdjustCameraAnimByEyeHeight::BaseEyeHeight)
        .def("ApplyBehaviorToContext", &UBehavior_AdjustCameraAnimByEyeHeight::ApplyBehaviorToContext)
          ;
}