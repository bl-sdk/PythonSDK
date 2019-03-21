#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInteractionIconDefinition()
{
    class_< UInteractionIconDefinition, bases< UEngineInteractionIconDefinition >  , boost::noncopyable>("UInteractionIconDefinition", no_init)
        .def_readwrite("Icon", &UInteractionIconDefinition::Icon)
        .def_readwrite("Action", &UInteractionIconDefinition::Action)
        .def_readwrite("Text", &UInteractionIconDefinition::Text)
        .def("StaticClass", &UInteractionIconDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}