#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_GiveInjuredPlayerSecondWind(py::module &m)
{
    py::class_< UBehavior_GiveInjuredPlayerSecondWind,  UBehaviorBase   >(m, "UBehavior_GiveInjuredPlayerSecondWind")
        .def("ApplyBehaviorToContext", &UBehavior_GiveInjuredPlayerSecondWind::ApplyBehaviorToContext)
          ;
}