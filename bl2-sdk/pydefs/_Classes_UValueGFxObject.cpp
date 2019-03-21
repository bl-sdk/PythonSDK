#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UValueGFxObject()
{
    class_< UValueGFxObject, bases< UGFxObject >  , boost::noncopyable>("UValueGFxObject", no_init)
        .def("StaticClass", &UValueGFxObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetValue", &UValueGFxObject::SetValue)
        .staticmethod("StaticClass")
  ;
}