#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AICloak(py::module &m)
{
    py::class_< UBehavior_AICloak,  UBehaviorBase   >(m, "UBehavior_AICloak")
        .def_readwrite("NewCloakBehavior", &UBehavior_AICloak::NewCloakBehavior)
        .def("ApplyBehaviorToContext", &UBehavior_AICloak::ApplyBehaviorToContext)
          ;
}