#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USequenceDefinition()
{
    class_< USequenceDefinition, bases< USequence >  , boost::noncopyable>("USequenceDefinition", no_init)
        .def("StaticClass", &USequenceDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}