#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FManufacturerCustomGradeWeightData(py::object m)
{
    py::class_< FManufacturerCustomGradeWeightData >(m, "FManufacturerCustomGradeWeightData")
        .def_readwrite("Manufacturer", &FManufacturerCustomGradeWeightData::Manufacturer)
        .def_readwrite("DefaultWeightIndex", &FManufacturerCustomGradeWeightData::DefaultWeightIndex)
  ;
}