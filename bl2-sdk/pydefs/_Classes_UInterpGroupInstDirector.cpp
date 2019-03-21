#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpGroupInstDirector()
{
    class_< UInterpGroupInstDirector, bases< UInterpGroupInst >  , boost::noncopyable>("UInterpGroupInstDirector", no_init)
        .def("StaticClass", &UInterpGroupInstDirector::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}