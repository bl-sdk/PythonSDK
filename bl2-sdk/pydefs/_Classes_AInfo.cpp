#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AInfo()
{
    class_< AInfo, bases< AActor >  , boost::noncopyable>("AInfo", no_init)
        .def("StaticClass", &AInfo::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}