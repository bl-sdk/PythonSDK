#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ARB_PrismaticActor(py::module &m)
{
    py::class_< ARB_PrismaticActor,  ARB_ConstraintActor   >(m, "ARB_PrismaticActor")
          ;
}