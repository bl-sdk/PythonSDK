#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FManufacturerCustomGradeWeightData()
{
    py::class_< FManufacturerCustomGradeWeightData >("FManufacturerCustomGradeWeightData")
        .def_readwrite("Manufacturer", &FManufacturerCustomGradeWeightData::Manufacturer)
        .def_readwrite("DefaultWeightIndex", &FManufacturerCustomGradeWeightData::DefaultWeightIndex)
  ;
}