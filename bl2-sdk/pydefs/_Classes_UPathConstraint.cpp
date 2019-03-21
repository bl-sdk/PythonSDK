#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPathConstraint()
{
    class_< UPathConstraint, bases< UObject >  , boost::noncopyable>("UPathConstraint", no_init)
        .def_readwrite("CacheIdx", &UPathConstraint::CacheIdx)
        .def_readwrite("NextConstraint", &UPathConstraint::NextConstraint)
        .def("StaticClass", &UPathConstraint::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetDumpString", &UPathConstraint::eventGetDumpString)
        .def("eventRecycle", &UPathConstraint::eventRecycle)
        .staticmethod("StaticClass")
  ;
}