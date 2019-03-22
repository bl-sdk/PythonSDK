#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_HasMissions(py::module &m)
{
    py::class_< UBehavior_HasMissions,  UBehaviorBase   >(m, "UBehavior_HasMissions")
        .def("ApplyBehaviorToContext", &UBehavior_HasMissions::ApplyBehaviorToContext)
          ;
}