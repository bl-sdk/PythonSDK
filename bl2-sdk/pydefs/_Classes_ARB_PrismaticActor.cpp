#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ARB_PrismaticActor(py::object m)
{
    py::class_< ARB_PrismaticActor,  ARB_ConstraintActor   >(m, "ARB_PrismaticActor")
        .def("StaticClass", &ARB_PrismaticActor::StaticClass, py::return_value_policy::reference)
          ;
}