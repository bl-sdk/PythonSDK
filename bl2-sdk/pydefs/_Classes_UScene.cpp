#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UScene(py::module &m)
{
    py::class_< UScene,  UObject   >(m, "UScene")
          ;
}