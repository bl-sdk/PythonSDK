#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULockoutDefinition()
{
    class_< ULockoutDefinition, bases< UGBXDefinition >  , boost::noncopyable>("ULockoutDefinition", no_init)
        .def_readwrite("Style", &ULockoutDefinition::Style)
        .def_readwrite("Days", &ULockoutDefinition::Days)
        .def_readwrite("Hours", &ULockoutDefinition::Hours)
        .def_readwrite("Minutes", &ULockoutDefinition::Minutes)
        .def_readwrite("DlcExpansion", &ULockoutDefinition::DlcExpansion)
        .def("StaticClass", &ULockoutDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("ComputePackedSystemTime", &ULockoutDefinition::ComputePackedSystemTime)
        .staticmethod("StaticClass")
  ;
}