#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UManufacturerDefinition(py::module &m)
{
    py::class_< UManufacturerDefinition,  UGBXDefinition   >(m, "UManufacturerDefinition")
		.def_static("StaticClass", &UManufacturerDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Grades", &UManufacturerDefinition::Grades)
        .def_readwrite("FlashLabelName", &UManufacturerDefinition::FlashLabelName)
        .def_readwrite("IconX", &UManufacturerDefinition::IconX)
        .def_readwrite("IconY", &UManufacturerDefinition::IconY)
        .def_readwrite("StatId", &UManufacturerDefinition::StatId)
        .def("GetManufacturerGradeDisplayName", &UManufacturerDefinition::GetManufacturerGradeDisplayName)
          ;
}