#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeAllegiance(py::module &m)
{
    py::class_< UBehavior_ChangeAllegiance,  UBehaviorBase   >(m, "UBehavior_ChangeAllegiance")
        .def_readwrite("Allegiance", &UBehavior_ChangeAllegiance::Allegiance)
        .def("ApplyBehaviorToContext", &UBehavior_ChangeAllegiance::ApplyBehaviorToContext)
          ;
}