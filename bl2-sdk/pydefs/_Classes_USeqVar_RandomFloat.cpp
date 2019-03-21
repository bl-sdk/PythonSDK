#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqVar_RandomFloat()
{
    class_< USeqVar_RandomFloat, bases< USeqVar_Float >  , boost::noncopyable>("USeqVar_RandomFloat", no_init)
        .def_readwrite("Min", &USeqVar_RandomFloat::Min)
        .def_readwrite("Max", &USeqVar_RandomFloat::Max)
        .def("StaticClass", &USeqVar_RandomFloat::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}