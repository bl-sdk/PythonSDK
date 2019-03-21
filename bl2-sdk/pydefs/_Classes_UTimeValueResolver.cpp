#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTimeValueResolver()
{
    class_< UTimeValueResolver, bases< UAttributeValueResolver >  , boost::noncopyable>("UTimeValueResolver", no_init)
        .def_readwrite("TimeMode", &UTimeValueResolver::TimeMode)
        .def_readwrite("StartTime", &UTimeValueResolver::StartTime)
        .def_readwrite("TotalTime", &UTimeValueResolver::TotalTime)
        .def("StaticClass", &UTimeValueResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}