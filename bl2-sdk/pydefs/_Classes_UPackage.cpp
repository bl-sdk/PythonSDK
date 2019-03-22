#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPackage(py::module &m)
{
    py::class_< UPackage,  UObject   >(m, "UPackage")
          ;
}