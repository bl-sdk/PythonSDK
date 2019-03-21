#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCustomizationType_Skin()
{
    class_< UCustomizationType_Skin, bases< UCustomizationType >  , boost::noncopyable>("UCustomizationType_Skin", no_init)
        .def("StaticClass", &UCustomizationType_Skin::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}