#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowDialogEmoteDefinition()
{
    class_< UWillowDialogEmoteDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UWillowDialogEmoteDefinition", no_init)
        .def("StaticClass", &UWillowDialogEmoteDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}