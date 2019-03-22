#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetCompassIcon(py::module &m)
{
    py::class_< UBehavior_SetCompassIcon,  UBehaviorBase   >(m, "UBehavior_SetCompassIcon")
        .def_readwrite("CompassIcon", &UBehavior_SetCompassIcon::CompassIcon)
        .def("ApplyBehaviorToContext", &UBehavior_SetCompassIcon::ApplyBehaviorToContext)
          ;
}