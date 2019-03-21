#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FManufacturerGradeData()
{
    class_< FManufacturerGradeData >("FManufacturerGradeData", no_init)
        .def_readwrite("DisplayName", &FManufacturerGradeData::DisplayName)
  ;
}