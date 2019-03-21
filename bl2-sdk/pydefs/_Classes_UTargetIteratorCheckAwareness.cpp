#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTargetIteratorCheckAwareness()
{
    class_< UTargetIteratorCheckAwareness, bases< UTargetIterator >  , boost::noncopyable>("UTargetIteratorCheckAwareness", no_init)
        .def("StaticClass", &UTargetIteratorCheckAwareness::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}