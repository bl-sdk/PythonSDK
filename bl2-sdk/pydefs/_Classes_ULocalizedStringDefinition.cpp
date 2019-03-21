#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULocalizedStringDefinition()
{
    class_< ULocalizedStringDefinition, bases< UGBXDefinition >  , boost::noncopyable>("ULocalizedStringDefinition", no_init)
        .def_readwrite("Text", &ULocalizedStringDefinition::Text)
        .def("StaticClass", &ULocalizedStringDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}