#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_QueryDayNightCycle(py::module &m)
{
    py::class_< UBehavior_QueryDayNightCycle,  UBehaviorBase   >(m, "UBehavior_QueryDayNightCycle")
        .def("ApplyBehaviorToContext", &UBehavior_QueryDayNightCycle::ApplyBehaviorToContext)
          ;
}