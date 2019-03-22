#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URB_PrismaticSetup(py::module &m)
{
    py::class_< URB_PrismaticSetup,  URB_ConstraintSetup   >(m, "URB_PrismaticSetup")
          ;
}