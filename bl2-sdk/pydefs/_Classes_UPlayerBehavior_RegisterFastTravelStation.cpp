#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerBehavior_RegisterFastTravelStation(py::module &m)
{
    py::class_< UPlayerBehavior_RegisterFastTravelStation,  UPlayerBehaviorBase   >(m, "UPlayerBehavior_RegisterFastTravelStation")
		.def_static("StaticClass", &UPlayerBehavior_RegisterFastTravelStation::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UPlayerBehavior_RegisterFastTravelStation::ApplyBehaviorToContext)
          ;
}