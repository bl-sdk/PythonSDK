#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FManufacturerGradeData()
{
    py::class_< FManufacturerGradeData >("FManufacturerGradeData")
        .def_readwrite("DisplayName", &FManufacturerGradeData::DisplayName)
  ;
}