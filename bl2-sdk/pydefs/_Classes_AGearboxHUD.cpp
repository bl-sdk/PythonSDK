#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AGearboxHUD()
{
    class_< AGearboxHUD, bases< AHUD >  , boost::noncopyable>("AGearboxHUD", no_init)
        .def("StaticClass", &AGearboxHUD::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}