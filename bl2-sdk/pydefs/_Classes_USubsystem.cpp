#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USubsystem()
{
    class_< USubsystem, bases< UObject >  , boost::noncopyable>("USubsystem", no_init)
        .def_readwrite("VfTable_FExec", &USubsystem::VfTable_FExec)
        .def("StaticClass", &USubsystem::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}