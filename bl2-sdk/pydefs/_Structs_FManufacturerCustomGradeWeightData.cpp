#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FManufacturerCustomGradeWeightData()
{
    class_< FManufacturerCustomGradeWeightData >("FManufacturerCustomGradeWeightData", no_init)
        .def_readwrite("Manufacturer", &FManufacturerCustomGradeWeightData::Manufacturer)
        .def_readwrite("DefaultWeightIndex", &FManufacturerCustomGradeWeightData::DefaultWeightIndex)
  ;
}