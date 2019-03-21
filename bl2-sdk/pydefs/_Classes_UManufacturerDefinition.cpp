#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UManufacturerDefinition()
{
    class_< UManufacturerDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UManufacturerDefinition", no_init)
        .def_readwrite("Grades", &UManufacturerDefinition::Grades)
        .def_readwrite("FlashLabelName", &UManufacturerDefinition::FlashLabelName)
        .def_readwrite("IconX", &UManufacturerDefinition::IconX)
        .def_readwrite("IconY", &UManufacturerDefinition::IconY)
        .def_readwrite("StatId", &UManufacturerDefinition::StatId)
        .def("StaticClass", &UManufacturerDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetManufacturerGradeDisplayName", &UManufacturerDefinition::GetManufacturerGradeDisplayName)
        .staticmethod("StaticClass")
  ;
}