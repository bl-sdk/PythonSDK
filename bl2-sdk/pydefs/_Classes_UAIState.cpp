#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAIState()
{
    class_< UAIState, bases< UAIStateBase >  , boost::noncopyable>("UAIState", no_init)
        .def("StaticClass", &UAIState::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}