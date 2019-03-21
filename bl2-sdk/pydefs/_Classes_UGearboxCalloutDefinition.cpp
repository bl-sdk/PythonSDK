#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxCalloutDefinition()
{
    py::class_< UGearboxCalloutDefinition,  UGBXDefinition   >("UGearboxCalloutDefinition")
        .def_readwrite("MaxCallOutDistance", &UGearboxCalloutDefinition::MaxCallOutDistance)
        .def_readwrite("MinCallOutDistance", &UGearboxCalloutDefinition::MinCallOutDistance)
        .def_readwrite("MinRarityCallOutLevel", &UGearboxCalloutDefinition::MinRarityCallOutLevel)
        .def("StaticClass", &UGearboxCalloutDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}