#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGFxValue()
{
    class_< UGFxValue, bases< UObject >  , boost::noncopyable>("UGFxValue", no_init)
        .def_readonly("Value", &UGFxValue::Value)
        .def("StaticClass", &UGFxValue::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}