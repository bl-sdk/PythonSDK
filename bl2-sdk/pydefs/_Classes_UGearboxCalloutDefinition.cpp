#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxCalloutDefinition(py::module &m)
{
    py::class_< UGearboxCalloutDefinition,  UGBXDefinition   >(m, "UGearboxCalloutDefinition")
        .def_readwrite("MaxCallOutDistance", &UGearboxCalloutDefinition::MaxCallOutDistance)
        .def_readwrite("MinCallOutDistance", &UGearboxCalloutDefinition::MinCallOutDistance)
        .def_readwrite("MinRarityCallOutLevel", &UGearboxCalloutDefinition::MinRarityCallOutLevel)
        .def("StaticClass", &UGearboxCalloutDefinition::StaticClass, py::return_value_policy::reference)
          ;
}