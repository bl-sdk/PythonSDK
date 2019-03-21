#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UEngineInteractionIconDefinition()
{
    class_< UEngineInteractionIconDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UEngineInteractionIconDefinition", no_init)
        .def("StaticClass", &UEngineInteractionIconDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}