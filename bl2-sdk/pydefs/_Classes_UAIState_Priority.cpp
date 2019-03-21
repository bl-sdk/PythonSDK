#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAIState_Priority()
{
    class_< UAIState_Priority, bases< UAIStateBase >  , boost::noncopyable>("UAIState_Priority", no_init)
        .def("StaticClass", &UAIState_Priority::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}