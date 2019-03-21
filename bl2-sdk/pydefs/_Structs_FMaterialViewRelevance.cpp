#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMaterialViewRelevance(py::object m)
{
    py::class_< FMaterialViewRelevance >(m, "FMaterialViewRelevance")
  ;
}