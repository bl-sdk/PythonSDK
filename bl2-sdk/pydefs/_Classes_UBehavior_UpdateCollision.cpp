#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_UpdateCollision(py::module &m)
{
    py::class_< UBehavior_UpdateCollision,  UBehaviorBase   >(m, "UBehavior_UpdateCollision")
		.def_static("StaticClass", &UBehavior_UpdateCollision::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_UpdateCollision::ApplyBehaviorToContext)
          ;
}