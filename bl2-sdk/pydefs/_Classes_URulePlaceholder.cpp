#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_URulePlaceholder()
{
    class_< URulePlaceholder, bases< URule >  , boost::noncopyable>("URulePlaceholder", no_init)
        .def("StaticClass", &URulePlaceholder::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}