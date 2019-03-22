#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ASkyLight(py::module &m)
{
    py::class_< ASkyLight,  ALight   >(m, "ASkyLight")
          ;
}