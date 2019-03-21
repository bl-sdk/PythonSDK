#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_DestroyWeatherSystem()
{
    py::class_< UBehavior_DestroyWeatherSystem,  UBehaviorBase   >("UBehavior_DestroyWeatherSystem")
        .def("StaticClass", &UBehavior_DestroyWeatherSystem::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_DestroyWeatherSystem::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}