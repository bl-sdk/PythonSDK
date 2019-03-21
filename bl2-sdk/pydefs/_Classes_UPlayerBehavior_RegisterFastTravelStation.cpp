#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerBehavior_RegisterFastTravelStation(py::object m)
{
    py::class_< UPlayerBehavior_RegisterFastTravelStation,  UPlayerBehaviorBase   >(m, "UPlayerBehavior_RegisterFastTravelStation")
        .def("StaticClass", &UPlayerBehavior_RegisterFastTravelStation::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UPlayerBehavior_RegisterFastTravelStation::ApplyBehaviorToContext)
          ;
}