#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_URES_AIOperation()
{
    class_< URES_AIOperation, bases< UActionResource >  , boost::noncopyable>("URES_AIOperation", no_init)
        .def("StaticClass", &URES_AIOperation::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}