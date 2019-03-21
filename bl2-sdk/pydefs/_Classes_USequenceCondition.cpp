#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USequenceCondition()
{
    class_< USequenceCondition, bases< USequenceOp >  , boost::noncopyable>("USequenceCondition", no_init)
        .def("StaticClass", &USequenceCondition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}