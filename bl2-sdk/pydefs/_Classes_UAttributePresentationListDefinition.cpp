#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAttributePresentationListDefinition()
{
    class_< UAttributePresentationListDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UAttributePresentationListDefinition", no_init)
        .def_readwrite("Attributes", &UAttributePresentationListDefinition::Attributes)
        .def("StaticClass", &UAttributePresentationListDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("FindAttributePresentation", &UAttributePresentationListDefinition::FindAttributePresentation, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}