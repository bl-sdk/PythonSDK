#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADominantDirectionalLight(py::module &m)
{
    py::class_< ADominantDirectionalLight,  ALight   >(m, "ADominantDirectionalLight")
          ;
}