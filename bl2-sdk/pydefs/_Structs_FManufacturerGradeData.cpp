#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FManufacturerGradeData(py::module &m)
{
    py::class_< FManufacturerGradeData >(m, "FManufacturerGradeData")
        .def_readwrite("DisplayName", &FManufacturerGradeData::DisplayName)
  ;
}