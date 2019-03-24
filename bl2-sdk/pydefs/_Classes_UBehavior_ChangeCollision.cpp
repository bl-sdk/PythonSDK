#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeCollision(py::module &m)
{
    py::class_< UBehavior_ChangeCollision,  UBehaviorBase   >(m, "UBehavior_ChangeCollision")
		.def_static("StaticClass", &UBehavior_ChangeCollision::StaticClass, py::return_value_policy::reference)
        .def_readwrite("NewCollisionType", &UBehavior_ChangeCollision::NewCollisionType)
        .def("ApplyBehaviorToContext", &UBehavior_ChangeCollision::ApplyBehaviorToContext)
          ;
}