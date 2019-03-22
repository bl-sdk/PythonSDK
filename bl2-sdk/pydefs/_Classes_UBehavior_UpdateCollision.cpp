#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_UpdateCollision(py::module &m)
{
    py::class_< UBehavior_UpdateCollision,  UBehaviorBase   >(m, "UBehavior_UpdateCollision")
        .def("ApplyBehaviorToContext", &UBehavior_UpdateCollision::ApplyBehaviorToContext)
          ;
}