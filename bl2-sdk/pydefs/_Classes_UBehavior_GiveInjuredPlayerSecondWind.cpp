#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_GiveInjuredPlayerSecondWind(py::module &m)
{
    py::class_< UBehavior_GiveInjuredPlayerSecondWind,  UBehaviorBase   >(m, "UBehavior_GiveInjuredPlayerSecondWind")
		.def_static("StaticClass", &UBehavior_GiveInjuredPlayerSecondWind::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_GiveInjuredPlayerSecondWind::ApplyBehaviorToContext)
          ;
}