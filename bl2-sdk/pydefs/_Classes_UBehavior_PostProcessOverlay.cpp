#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_PostProcessOverlay(py::module &m)
{
    py::class_< UBehavior_PostProcessOverlay,  UBehaviorBase   >(m, "UBehavior_PostProcessOverlay")
		.def_static("StaticClass", &UBehavior_PostProcessOverlay::StaticClass, py::return_value_policy::reference)
        .def_readwrite("OverlayParameters", &UBehavior_PostProcessOverlay::OverlayParameters)
        .def("ApplyBehaviorToContext", &UBehavior_PostProcessOverlay::ApplyBehaviorToContext)
          ;
}