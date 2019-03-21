#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCustomizationType_Head()
{
    class_< UCustomizationType_Head, bases< UCustomizationType >  , boost::noncopyable>("UCustomizationType_Head", no_init)
        .def("StaticClass", &UCustomizationType_Head::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}