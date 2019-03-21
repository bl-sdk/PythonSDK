#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpGroupDirector()
{
    class_< UInterpGroupDirector, bases< UInterpGroup >  , boost::noncopyable>("UInterpGroupDirector", no_init)
        .def_readwrite("AttachedGroupName", &UInterpGroupDirector::AttachedGroupName)
        .def("StaticClass", &UInterpGroupDirector::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}