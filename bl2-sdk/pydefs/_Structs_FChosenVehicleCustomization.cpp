#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FChosenVehicleCustomization(py::object m)
{
    py::class_< FChosenVehicleCustomization >(m, "FChosenVehicleCustomization")
        .def_readwrite("FamilyDef", &FChosenVehicleCustomization::FamilyDef)
        .def_readonly("CustomizationDef", &FChosenVehicleCustomization::CustomizationDef)
  ;
}