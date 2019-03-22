#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMapInfo(py::module &m)
{
    py::class_< UMapInfo,  UObject   >(m, "UMapInfo")
          ;
}