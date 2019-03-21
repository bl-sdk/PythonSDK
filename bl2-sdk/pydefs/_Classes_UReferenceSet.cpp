#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UReferenceSet()
{
    class_< UReferenceSet, bases< UObject >  , boost::noncopyable>("UReferenceSet", no_init)
        .def_readwrite("References", &UReferenceSet::References)
        .def("StaticClass", &UReferenceSet::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}