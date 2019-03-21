#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqVar_String()
{
    class_< USeqVar_String, bases< USequenceVariable >  , boost::noncopyable>("USeqVar_String", no_init)
        .def_readwrite("StrValue", &USeqVar_String::StrValue)
        .def("StaticClass", &USeqVar_String::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}