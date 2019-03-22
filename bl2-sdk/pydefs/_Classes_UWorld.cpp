#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWorld(py::module &m)
{
    py::class_< UWorld,  UObject   >(m, "UWorld")
          ;
}