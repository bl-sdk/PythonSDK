#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FManufacturerSelectorData()
{
    class_< FManufacturerSelectorData >("FManufacturerSelectorData", no_init)
        .def_readwrite("AssociatedManufacturerName", &FManufacturerSelectorData::AssociatedManufacturerName)
        .def_readwrite("ValueIfMatched", &FManufacturerSelectorData::ValueIfMatched)
  ;
}