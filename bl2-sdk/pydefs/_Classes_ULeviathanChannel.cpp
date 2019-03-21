#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULeviathanChannel()
{
    class_< ULeviathanChannel, bases< UChannel >  , boost::noncopyable>("ULeviathanChannel", no_init)
        .def_readonly("UnknownData00", &ULeviathanChannel::UnknownData00)
        .def("StaticClass", &ULeviathanChannel::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}