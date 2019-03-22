#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AMatineePawn(py::module &m)
{
    py::class_< AMatineePawn,  APawn   >(m, "AMatineePawn")
          ;
}