#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FChosenVehicleCustomization()
{
    py::class_< FChosenVehicleCustomization >("FChosenVehicleCustomization")
        .def_readwrite("FamilyDef", &FChosenVehicleCustomization::FamilyDef)
        .def_readonly("CustomizationDef", &FChosenVehicleCustomization::CustomizationDef)
  ;
}