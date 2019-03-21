#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqVar_RandomInt()
{
    class_< USeqVar_RandomInt, bases< USequenceVariable >  , boost::noncopyable>("USeqVar_RandomInt", no_init)
        .def_readwrite("Min", &USeqVar_RandomInt::Min)
        .def_readwrite("Max", &USeqVar_RandomInt::Max)
        .def_readwrite("IntValue", &USeqVar_Int::IntValue)
        .def("StaticClass", &USeqVar_RandomInt::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}