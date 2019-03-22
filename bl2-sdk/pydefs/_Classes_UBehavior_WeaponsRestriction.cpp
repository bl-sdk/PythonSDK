#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_WeaponsRestriction(py::module &m)
{
    py::class_< UBehavior_WeaponsRestriction,  UBehaviorBase   >(m, "UBehavior_WeaponsRestriction")
        .def("ApplyBehaviorToContext", &UBehavior_WeaponsRestriction::ApplyBehaviorToContext)
          ;
}