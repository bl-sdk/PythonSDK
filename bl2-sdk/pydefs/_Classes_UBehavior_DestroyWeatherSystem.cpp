#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_DestroyWeatherSystem(py::module &m)
{
    py::class_< UBehavior_DestroyWeatherSystem,  UBehaviorBase   >(m, "UBehavior_DestroyWeatherSystem")
        .def("ApplyBehaviorToContext", &UBehavior_DestroyWeatherSystem::ApplyBehaviorToContext)
          ;
}