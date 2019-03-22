#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeDenAllegiance(py::module &m)
{
    py::class_< UBehavior_ChangeDenAllegiance,  UBehaviorBase   >(m, "UBehavior_ChangeDenAllegiance")
        .def_readwrite("Allegiance", &UBehavior_ChangeDenAllegiance::Allegiance)
        .def("ApplyBehaviorToContext", &UBehavior_ChangeDenAllegiance::ApplyBehaviorToContext)
          ;
}