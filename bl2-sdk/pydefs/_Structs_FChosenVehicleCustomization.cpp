#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FChosenVehicleCustomization()
{
    class_< FChosenVehicleCustomization >("FChosenVehicleCustomization", no_init)
        .def_readwrite("FamilyDef", &FChosenVehicleCustomization::FamilyDef)
        .def_readonly("CustomizationDef", &FChosenVehicleCustomization::CustomizationDef)
  ;
}