#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMaterialViewRelevance()
{
    py::class_< FMaterialViewRelevance >("FMaterialViewRelevance")
  ;
}