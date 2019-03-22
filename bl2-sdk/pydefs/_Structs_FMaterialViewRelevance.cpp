#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMaterialViewRelevance(py::module &m)
{
    py::class_< FMaterialViewRelevance >(m, "FMaterialViewRelevance")
  ;
}