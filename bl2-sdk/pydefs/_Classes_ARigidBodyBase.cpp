#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ARigidBodyBase(py::module &m)
{
    py::class_< ARigidBodyBase,  AActor   >(m, "ARigidBodyBase")
        .def("StaticClass", &ARigidBodyBase::StaticClass, py::return_value_policy::reference)
          ;
}